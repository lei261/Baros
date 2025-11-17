import express from "express";
import { WebSocketServer } from "ws";
import { SerialPort } from "serialport";
import os from "os";

// 自动判断系统类型
const platform = os.platform(); // 'linux', 'win32', 'darwin' ...
let serialPath = "/dev/serial0"; // 默认树莓派串口路径

if (platform === "win32") {
  serialPath = "COM3"; // Windows 下使用 COM3
}

console.log(`Detected platform: ${platform}`);
console.log(`Using serial port: ${serialPath}`);

// Display network interfaces for debugging
console.log("\n🌐 Network Interfaces:");
const interfaces = os.networkInterfaces();
Object.keys(interfaces).forEach(name => {
  interfaces[name].forEach(iface => {
    if (iface.family === 'IPv4' && !iface.internal) {
      console.log(`   ${name}: ${iface.address}`);
    }
  });
});
console.log("");

// 打开串口
const serial = new SerialPort({
  path: serialPath,
  baudRate: 9600,
});

serial.on("open", () => console.log("✅ Serial port opened:", serialPath));
serial.on("error", (err) => console.error("❌ Serial error:", err.message));

// 启动 HTTP 服务器
const app = express();
app.use(express.static("public"));
app.listen(3000, "0.0.0.0", () => {
  console.log("🌐 HTTP running at http://0.0.0.0:3000");
  console.log("   Also accessible at http://localhost:3000");
  console.log("   And http://[your-pi-ip]:3000");
});

// 启动 WebSocket 服务器
const wss = new WebSocketServer({ 
  port: 8080,
  host: "0.0.0.0"  // Bind to all interfaces
});
console.log("🔌 WebSocket listening on ws://0.0.0.0:8080");
console.log("   Also accessible at ws://localhost:8080");
console.log("   And ws://[your-pi-ip]:8080");

// WebSocket server error handling
wss.on("error", (error) => {
  console.error("❌ WebSocket server error:", error.message);
  console.error("   Details:", error);
});

wss.on("connection", (ws, req) => {
  const clientIP = req.socket.remoteAddress;
  const userAgent = req.headers['user-agent'] || 'Unknown';
  console.log(`✅ WebSocket connected from ${clientIP}`);
  console.log(`   User-Agent: ${userAgent}`);
  console.log(`   Headers:`, req.headers);

  // WebSocket connection error handling
  ws.on("error", (error) => {
    console.error("❌ WebSocket connection error:", error.message);
    console.error("   Client IP:", clientIP);
    console.error("   Error details:", error);
  });

  // Check WebSocket ready state
  ws.on("open", () => {
    console.log("🔗 WebSocket connection opened successfully");
  });

  ws.on("message", (msg) => {
    try {
      // Check if WebSocket is still open before processing
      if (ws.readyState !== ws.OPEN) {
        console.warn("⚠️ Received message on closed WebSocket connection");
        return;
      }

      // Check if it's binary data (Buffer) or text
      if (Buffer.isBuffer(msg)) {
        serial.write(msg);
        console.log("➡️ Sent to serial:", Array.from(msg).map(b => '0x' + b.toString(16).padStart(2, '0')).join(' '));
      } else {
        // Try to parse as JSON for text messages
        const data = JSON.parse(msg);
        console.log("📩 Received JSON:", data);
        
      }
    } catch (e) {
      console.error("⚠️ Invalid message:", e);
      console.error("   Message content:", msg.toString());
    }
  });

  // 串口收到数据时转发回前端
  serial.on("data", (data) => {
    // Check if WebSocket is still open before sending
    if (ws.readyState === ws.OPEN) {
      try {
        // Parse the serial data
        const buffer = Buffer.from(data);
        console.log("📨 Received serial data:", Array.from(buffer).map(b => '0x' + b.toString(16).padStart(2, '0')).join(' '));
        console.log("📨 Buffer length:", buffer.length);
        console.log("📨 First 4 bytes:", Array.from(buffer.slice(0, 4)).map(b => '0x' + b.toString(16).padStart(2, '0')).join(' '));
        console.log("📨 Last byte:", '0x' + buffer[buffer.length - 1].toString(16).padStart(2, '0'));
        
        // Check if it's a bottle status message (0x0F, bottle_id, status, 0xAA)
        if (buffer.length >= 8 && buffer[0] === 0x0F && buffer[7] === 0xAA){
          if (buffer[2] === 0x01) {
            const bottleId = buffer[4];
            const status = buffer[6];
            
            console.log(`🍾 Bottle ${bottleId} status: ${status === 0x01 ? 'FULL' : 'EMPTY'}`);
            
            // Send structured data to frontend
            const message = {
              type: 'bottle_status',
              bottleId: bottleId,
              status: status === 0x01 ? 'full' : 'empty',
              raw: Array.from(buffer).map(b => '0x' + b.toString(16).padStart(2, '0')).join(' ')
            };
            
            ws.send(JSON.stringify(message));
           } else if (buffer[2] === 0x00) {
             const moduleId = buffer[4];
             const status = buffer[6];
             // Map module ID to readable name
             let moduleName;
             switch(moduleId) {
               case 0x00:
                 moduleName = "voice";
                 break;
               case 0x01:
                 moduleName = "clean";
                 break;
               case 0x02:
                 moduleName = "pouring";
                 break;
              case 0x03:
                moduleName = "wifi";
                break;
              case 0x04:
                moduleName = "server";
                break;
               default:
                 moduleName = `unknown_${moduleId}`;
             }

             console.log(`🔧 Module ${moduleName} (ID: ${moduleId}) status: ${status}`);
             const message = {
               type: 'module_status',
               module: moduleName,
               moduleId: moduleId,
               status: status,
               raw: Array.from(buffer).map(b => '0x' + b.toString(16).padStart(2, '0')).join(' ')
             };
             
             ws.send(JSON.stringify(message));
          } else {
            console.log("📨 Message doesn't match bottle status format, sending as raw hex");
            // Send raw hex data for other messages
            ws.send(data.toString("hex"));
  
          }
        } else {
          console.log("📨 Message format incorrect sending as raw hex");
          ws.send(data.toString("hex"));
        }
      } catch (error) {
        console.error("❌ Failed to send data to WebSocket client:", error.message);
      }
    } else {
      console.warn("⚠️ WebSocket connection is not open, cannot send serial data");
    }
  });

  ws.on("close", (code, reason) => {
    console.log(`🔌 WebSocket disconnected from ${clientIP}`);
    console.log(`   Close code: ${code}`);
    console.log(`   Reason: ${reason || 'No reason provided'}`);
  });

  // Handle unexpected connection termination
  ws.on("unexpected-response", (request, response) => {
    console.error("❌ WebSocket unexpected response:", response.statusCode);
    console.error("   Response headers:", response.headers);
  });
});
