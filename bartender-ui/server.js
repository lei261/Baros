import express from "express";
import { WebSocketServer } from "ws";
import pkg from 'serialport';
const { SerialPort } = pkg; // 修正：serialport的list是静态方法，需通过SerialPort调用
import os from "os";
import fs from "fs";
import path from "path";
import { fileURLToPath } from 'url';
import fetch from "node-fetch";
import { exec } from "child_process";

// 定义__dirname（ES模块兼容）
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

// ==================== 基础配置 ====================
let serialPath = "";
let serialPortList = [];

const HTTP_PORT = 3000;
const WS_PORT = 8080;
const PUBLIC_DIR = path.join(__dirname, "public");

const OTA_CONFIG = {
  repoUrl: "https://github.com/lei261/Baros.git",
  targetDir: path.join(PUBLIC_DIR, "bartender-ui"),
  branch: "main",
  lastCommitFile: path.join(__dirname, ".last_commit"),
};

// ==================== 全局状态 ====================
let otaStatus = {
  state: "idle",
  message: "就绪",
  progress: 0,
};
let lastCommitHash = null;
let serial = null;

// ==================== 初始化HTTP服务器 ====================
const app = express();
app.use(express.static(PUBLIC_DIR));

// 接口：查询可用串口（修正：使用SerialPort.list()）
app.get("/serial/ports", async (req, res) => {
  try {
    // 关键修复：serialport的list是SerialPort的静态方法，而非单独导出
    const ports = await SerialPort.list(); 
    serialPortList = ports.map(port => ({
      path: port.path,
      manufacturer: port.manufacturer || "未知设备"
    }));
    res.json(serialPortList);
  } catch (err) {
    res.status(500).json({ error: `查询串口失败：${err.message}` });
  }
});

app.get("/ota/status", (req, res) => {
  res.json(otaStatus);
});

const httpServer = app.listen(HTTP_PORT, "0.0.0.0", () => {
  console.log(`🌐 网页服务启动：`);
  console.log(`   本地访问：http://localhost:${HTTP_PORT}`);
  logNetworkInterfaces();
});

// ==================== WebSocket配置 ====================
const wss = new WebSocketServer({ port: WS_PORT, host: "0.0.0.0" });
console.log(`🔌 WebSocket服务启动：ws://localhost:${WS_PORT}`);

const broadcast = (message) => {
  wss.clients.forEach(client => {
    if (client.readyState === client.OPEN) {
      client.send(JSON.stringify(message));
    }
  });
};

// ==================== 串口功能实现 ====================
async function initSerial(portPath) {
  if (serial && serial.isOpen) {
    await serial.close();
    console.log(`🔌 已关闭原有串口连接`);
  }

  serial = new SerialPort({
    path: portPath,
    baudRate: 9600,
    autoOpen: false
  });

  serial.open((err) => {
    if (err) {
      console.error(`❌ 串口连接失败（${portPath}）：${err.message}`);
      broadcast({
        type: "serial_status",
        connected: false,
        message: `连接失败：${err.message}`
      });
      return;
    }

    serialPath = portPath;
    console.log(`✅ 串口已连接：${portPath}`);
    broadcast({
      type: "serial_status",
      connected: true,
      path: portPath
    });
  });

  serial.on("data", (data) => {
    try {
      const buffer = Buffer.from(data);
      console.log(`📥 串口数据：${buffer.toString("hex")}`);

      let message;
      if (buffer.length >= 8 && buffer[0] === 0x0F && buffer[7] === 0xAA) {
        if (buffer[2] === 0x01) {
          const bottleId = buffer[4];
          const status = buffer[6] === 0x01 ? "full" : "empty";
          message = {
            type: "bottle_status",
            bottleId,
            status,
            timestamp: new Date().toISOString()
          };
          console.log(`🍾 瓶子 ${bottleId} 状态：${status}`);
        } else if (buffer[2] === 0x00) {
          const moduleId = buffer[4];
          const moduleNames = { 0x00: "voice", 0x01: "clean", 0x02: "pouring", 0x03: "wifi", 0x04: "server" };
          message = {
            type: "module_status",
            module: moduleNames[moduleId] || `unknown_${moduleId}`,
            status: buffer[6],
            timestamp: new Date().toISOString()
          };
        }
      }

      if (message) {
        broadcast(message);
      } else {
        broadcast({
          type: "raw_data",
          data: buffer.toString("hex"),
          timestamp: new Date().toISOString()
        });
      }
    } catch (err) {
      console.error(`❌ 串口数据解析错误：${err.message}`);
    }
  });

  serial.on("error", (err) => {
    console.error(`❌ 串口错误：${err.message}`);
    broadcast({
      type: "serial_status",
      connected: false,
      message: `错误：${err.message}`
    });
  });

  serial.on("close", () => {
    console.log(`🔌 串口已断开（${serialPath}）`);
    broadcast({
      type: "serial_status",
      connected: false,
      message: "连接已断开"
    });
  });
}

// ==================== OTA功能实现 ====================
function runGitCommand(command, cwd) {
  return new Promise((resolve, reject) => {
    exec(command, { cwd, encoding: "utf8" }, (error, stdout, stderr) => {
      if (error) {
        reject(new Error(`Git命令失败：${stderr || error.message}`));
        return;
      }
      resolve(stdout.trim());
    });
  });
}

async function initOTA() {
  try {
    if (!fs.existsSync(OTA_CONFIG.targetDir)) {
      fs.mkdirSync(OTA_CONFIG.targetDir, { recursive: true });
      console.log(`📂 创建更新目录：${OTA_CONFIG.targetDir}`);
    }

    if (fs.existsSync(OTA_CONFIG.lastCommitFile)) {
      lastCommitHash = fs.readFileSync(OTA_CONFIG.lastCommitFile, "utf8").trim();
      console.log(`📌 本地已记录版本：${lastCommitHash.substring(0, 7)}`);
    }

    const gitDir = path.join(OTA_CONFIG.targetDir, ".git");
    if (!fs.existsSync(gitDir)) {
      // 目标目录存在但不是 Git 仓库
      const existingFiles = fs
        .readdirSync(OTA_CONFIG.targetDir)
        .filter((name) => name !== ".last_commit");

      if (existingFiles.length > 0) {
        // 目录非空 → 认为你已经手动部署过前端代码，跳过自动克隆
        console.log(
          `⚠️ 检测到 ${OTA_CONFIG.targetDir} 已存在且非空，跳过自动 git clone。`
        );
        console.log(
          "   如果需要 OTA 自动更新，请确保该目录为空或自行在此目录下初始化/克隆 Git 仓库。"
        );
        updateOTAStatus(
          "idle",
          0,
          "检测到已有前端代码，已跳过首次克隆（不启用自动更新）"
        );
        return;
      }

      // 目录为空 → 正常首次克隆
      console.log(`📦 首次克隆仓库：${OTA_CONFIG.repoUrl}`);
      updateOTAStatus("updating", 20, "首次克隆仓库...");
      await runGitCommand(
        `git clone ${OTA_CONFIG.repoUrl} .`,
        OTA_CONFIG.targetDir
      );
      await runGitCommand(`git checkout ${OTA_CONFIG.branch}`, OTA_CONFIG.targetDir);
    }

    // 此时已经确保是一个 Git 仓库，读取当前版本
    lastCommitHash = await runGitCommand(
      "git rev-parse HEAD",
      OTA_CONFIG.targetDir
    );
    fs.writeFileSync(OTA_CONFIG.lastCommitFile, lastCommitHash);
    console.log(`✅ OTA初始化完成，当前版本：${lastCommitHash.substring(0, 7)}`);
    updateOTAStatus("success", 100, "OTA初始化完成");
  } catch (err) {
    console.error(`❌ OTA初始化失败：${err.message}`);
    updateOTAStatus("error", 0, `初始化失败：${err.message}`);
  }
}

async function checkForUpdates() {
  const gitDir = path.join(OTA_CONFIG.targetDir, ".git");
  if (!fs.existsSync(gitDir)) {
    console.log(
      `⚠️ 未检测到 Git 仓库（${gitDir}），跳过自动检查更新。`
    );
    updateOTAStatus(
      "idle",
      0,
      "未检测到 Git 仓库，已跳过自动检查更新"
    );
    return;
  }

  updateOTAStatus("checking", 0, "检查更新中...");
  try {
    const apiUrl = `https://api.github.com/repos/lei261/Baros/commits/${OTA_CONFIG.branch}`;
    const response = await fetch(apiUrl);
    
    if (!response.ok) {
      throw new Error(`GitHub API请求失败：${response.status}`);
    }
    
    const remoteCommit = await response.json();
    const remoteHash = remoteCommit.sha;

    console.log(`🔍 远程最新版本：${remoteHash.substring(0, 7)}`);
    console.log(`🔍 本地当前版本：${lastCommitHash?.substring(0, 7)}`);

    if (lastCommitHash && remoteHash !== lastCommitHash) {
      await pullAndUpdate(remoteHash);
    } else {
      updateOTAStatus("idle", 0, "当前已是最新版本");
    }
  } catch (err) {
    console.error(`❌ 检查更新失败：${err.message}`);
    updateOTAStatus("error", 0, `检查失败：${err.message}`);
  }
}

async function pullAndUpdate(remoteHash) {
  try {
    const gitDir = path.join(OTA_CONFIG.targetDir, ".git");
    if (!fs.existsSync(gitDir)) {
      console.log(
        `⚠️ 未检测到 Git 仓库（${gitDir}），无法执行自动更新。`
      );
      updateOTAStatus(
        "error",
        0,
        "未检测到 Git 仓库，无法执行自动更新"
      );
      return;
    }

    updateOTAStatus("updating", 30, "拉取最新代码...");
    await runGitCommand(`git pull origin ${OTA_CONFIG.branch}`, OTA_CONFIG.targetDir);
    
    updateOTAStatus("updating", 70, "安装前端依赖...");
    await runGitCommand("npm install", OTA_CONFIG.targetDir);

    lastCommitHash = remoteHash;
    fs.writeFileSync(OTA_CONFIG.lastCommitFile, lastCommitHash);

    updateOTAStatus("success", 100, "更新完成，请刷新页面");
    broadcast({
      type: "ota_update",
      message: "网页已更新至最新版本",
      version: remoteHash.substring(0, 7)
    });
    console.log(`✅ 更新完成，新版本：${remoteHash.substring(0, 7)}`);
  } catch (err) {
    console.error(`❌ 更新失败：${err.message}`);
    updateOTAStatus("error", 0, `更新失败：${err.message}`);
  }
}

function updateOTAStatus(state, progress, message) {
  otaStatus = { state, progress, message };
  broadcast({
    type: "ota_status",
    ...otaStatus,
    timestamp: new Date().toISOString()
  });
}

// ==================== 辅助函数 ====================
function logNetworkInterfaces() {
  const interfaces = os.networkInterfaces();
  Object.keys(interfaces).forEach(name => {
    interfaces[name].forEach(iface => {
      if (iface.family === "IPv4" && !iface.internal) {
        console.log(`   局域网访问：http://${iface.address}:${HTTP_PORT}`);
      }
    });
  });
}

// ==================== WebSocket交互（修复：处理非JSON数据） ====================
wss.on("connection", (ws) => {
  console.log("✅ 网页客户端已连接");
  
  ws.send(JSON.stringify({
    type: "initial_state",
    ota: otaStatus,
    serial: {
      connected: serial?.isOpen || false,
      currentPath: serialPath,
      ports: serialPortList
    }
  }));

  ws.on("message", (data) => {
    try {
      // 修复：先检查数据是否为字符串，非字符串直接忽略（如二进制）
      if (typeof data !== 'string') {
        console.log(`📥 收到非字符串数据（可能是二进制），跳过解析`);
        return;
      }
      // 尝试解析JSON
      const msg = JSON.parse(data);
      
      if (msg.type === "serial_connect") {
        console.log(`📞 客户端请求连接串口：${msg.path}`);
        initSerial(msg.path);
      } else if (msg.type === "manual_check_update") {
        checkForUpdates();
      } else if (msg.type === "serial_command" && serial?.isOpen) {
        serial.write(Buffer.from(msg.data, "hex"), (err) => {
          if (err) console.error(`❌ 串口发送失败：${err.message}`);
          else console.log(`➡️ 发送到串口：${msg.data}`);
        });
      }
    } catch (err) {
      // 详细错误日志，不中断程序
      console.error(`❌ WebSocket消息处理错误：${err.message}，原始数据：${data.toString()}`);
    }
  });

  ws.on("close", () => {
    console.log("🔌 网页客户端已断开");
  });
});

// ==================== 启动流程 ====================
async function start() {
  await initOTA();
  
  // 初始化串口列表（修正：使用SerialPort.list()）
  try {
    const ports = await SerialPort.list(); // 关键修复：正确调用串口列表方法
    serialPortList = ports.map(port => ({
      path: port.path,
      manufacturer: port.manufacturer || "未知设备"
    }));
    console.log(`🔍 可用串口：${serialPortList.map(p => p.path).join(", ")}`);
  } catch (err) {
    console.error(`❌ 串口列表查询失败：${err.message}`);
  }
  
  // 启动后5秒检查一次更新
  setTimeout(checkForUpdates, 5000);
  console.log(`⏰ 启动后将检查一次更新（5秒后）`);
}

start();