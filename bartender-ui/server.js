import express from "express";
import { WebSocketServer } from "ws";
import pkg from 'serialport';
const { SerialPort } = pkg;
import os from "os";
import path from "path";
import { fileURLToPath } from 'url';

// 定义__dirname
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

// ==================== 基础配置 ====================
let serialPath = "";
let serialPortList = [];
const HTTP_PORT = 3000;
const WS_PORT = 8080;
const PUBLIC_DIR = path.join(__dirname, "public");

// ==================== 全局状态 ====================
let serial = null;

// ==================== 初始化HTTP服务器 ====================
const app = express();
app.use(express.static(PUBLIC_DIR));

// 接口：查询可用串口
app.get("/serial/ports", async (req, res) => {
  try {
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

const httpServer = app.listen(HTTP_PORT, "0.0.0.0", () => {
  console.log(`🌐 网页服务启动：`);
  console.log(`   本地访问：http://localhost:${HTTP_PORT}`);
  logNetworkInterfaces();
});

// ==================== WebSocket配置 ====================
const wss = new WebSocketServer({ port: WS_PORT, host: "0.0.0.0" });
console.log(`🔌 WebSocket服务启动：ws://localhost:${WS_PORT}`);

// 广播消息到所有客户端
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

// ==================== 辅助函数 ====================
// 显示局域网访问地址
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

// ==================== WebSocket交互 ====================
wss.on("connection", (ws) => {
  console.log("✅ 网页客户端已连接");
  
  // 发送初始状态
  ws.send(JSON.stringify({
    type: "initial_state",
    serial: {
      connected: serial?.isOpen || false,
      currentPath: serialPath,
      ports: serialPortList
    }
  }));

  // 处理客户端消息
  ws.on("message", (data) => {
    try {
      if (typeof data !== 'string') {
        console.log(`📥 收到非字符串数据，跳过解析`);
        return;
      }
      const msg = JSON.parse(data);
      
      // 连接串口
      if (msg.type === "serial_connect") {
        console.log(`📞 客户端请求连接串口：${msg.path}`);
        initSerial(msg.path);
      }
      // 发送串口指令
      else if (msg.type === "serial_command" && serial?.isOpen) {
        serial.write(Buffer.from(msg.data, "hex"), (err) => {
          if (err) console.error(`❌ 串口发送失败：${err.message}`);
          else console.log(`➡️ 发送到串口：${msg.data}`);
        });
      }
    } catch (err) {
      console.error(`❌ WebSocket消息处理错误：${err.message}`);
    }
  });

  // 客户端断开连接
  ws.on("close", () => {
    console.log("🔌 网页客户端已断开");
  });
});

// ==================== 启动流程 ====================
async function start() {
  // 初始化串口列表
  try {
    const ports = await SerialPort.list();
    serialPortList = ports.map(port => ({
      path: port.path,
      manufacturer: port.manufacturer || "未知设备"
    }));
    console.log(`🔍 可用串口：${serialPortList.map(p => p.path).join(", ")}`);
  } catch (err) {
    console.error(`❌ 串口列表查询失败：${err.message}`);
  }
}

// 启动应用
start();