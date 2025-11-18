#!/bin/bash
# /home/lei/Desktop/startup.sh
set -e

# Load nvm (if you use it) so npm/node are in PATH
export NVM_DIR="/home/lei/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && . "$NVM_DIR/nvm.sh"

APP_DIR="/home/lei/Baros/bartender-ui"

/usr/bin/python3 "$APP_DIR/update.py" >> "$APP_DIR/update.log" 2>&1 || true


cd "$APP_DIR"
npm i express ws serialport >> "$APP_DIR/npm-install.log" 2>&1 || true

# Launch Chromium (non-blocking) with your flags and the FULL path:
chromium \
  --kiosk \
  --incognito \
  --lang=en-US \
  --disable-translate \
  --disable-features=Translate,TranslateUI \
  --disable-infobars \
  --no-first-run \
  --disable-session-crashed-bubble \
  --noerrdialogs \
  --check-for-update-interval=31536000 \
  --overscroll-history-navigation=0 \
  --force-device-scale-factor=1 \
  --password-store=basic \
  --use-mock-keychain \
  /home/lei/Baros/bartender-ui/public/index.html \
  >/dev/null 2>&1 &

# Start Node last (becomes main process)
exec node "$APP_DIR/server.js"
