#!/bin/bash
# /home/lei/Desktop/startup.sh
# set -e

# Load nvm (if you use it) so npm/node are in PATH
export NVM_DIR="/home/lei/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && . "$NVM_DIR/nvm.sh"

APP_DIR="/home/lei/Baros/bartender-ui"

try_update() {
  echo "$(date) [update] starting" >> "$LOG"

  # Try up to 2 times
  for i in 1 2; do
    echo "$(date) [update] attempt $i: testing github.com..." >> "$LOG"

    # Quick connectivity probe (5s max)
    if curl -s --head --connect-timeout 5 --max-time 8 https://github.com >/dev/null 2>&1; then
      echo "$(date) [update] github reachable, running update.py" >> "$LOG"

      # Run your update script with a hard cap (e.g. 60s)
      timeout 10s /usr/bin/python3 "$APP_DIR/update.py" >> "$LOG" 2>&1 && {
        echo "$(date) [update] update.py succeeded" >> "$LOG"
        return 0
      }
      echo "$(date) [update] update.py failed on attempt $i" >> "$LOG"
    else
      echo "$(date) [update] github unreachable on attempt $i" >> "$LOG"
    fi

    sleep 2
  done

  echo "$(date) [update] giving up for this boot" >> "$LOG"
  return 1
}

# Option A: run and wait, but never hang forever
try_update || echo "$(date) [update] skipped (network or error)" >> "$LOG"


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
