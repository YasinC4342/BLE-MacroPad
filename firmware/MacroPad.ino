/*
  This was made by @YasinC4342 for MacroPad devices. Check out on : 
  https://github.com/YasinC4342/BLE-MacroPad/upload/V2/firmware
  It uses an I2C SSD1306 OLED display module, a rotary encoder,
  12x push buttons (mechanical switches), esp32 s3 wroom 1 and finally 12x SK6812
  matrix RGB LEDs. IMPORTANT BEFORE USE : THIS FIRMWARE IS JUST A TEST FOR EACH COMPONENTS,
  NOT A FULLY WORKING BLE OR EVEN USB KEYBOARD !
*/

#include <Arduino.h>
#include <Wire.h>
#include <BleKeyboard.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_NeoPixel.h>

static constexpr uint8_t KEY_COUNT = 12;
static const uint8_t KEY_PINS[KEY_COUNT] = {
  1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13
};

static constexpr uint8_t RGB_PIN = 14;
static constexpr uint8_t OLED_SDA_PIN = 17;
static constexpr uint8_t OLED_SCL_PIN = 18;
static constexpr uint8_t RGB_COUNT = 12;
static constexpr uint8_t OLED_ADDRESS = 0x3C;
static constexpr uint16_t DEBOUNCE_MS = 28;

static constexpr int OLED_WIDTH = 128;
static constexpr int OLED_HEIGHT = 64;

BleKeyboard bleKeyboard("MacroPad", "Open", 100);
Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT, &Wire, -1);
Adafruit_NeoPixel pixels(RGB_COUNT, RGB_PIN, NEO_GRB + NEO_KHZ800);

struct KeyState {
  bool stablePressed = false;
  bool lastRawPressed = false;
  uint32_t lastChangeMs = 0;
};

KeyState keyStates[KEY_COUNT];
bool oledAvailable = false;
int lastKey = -1;
const char* lastAction = "Ready";

const char* KEY_LABELS[KEY_COUNT] = {
  "Ctrl+C", "Ctrl+V", "Ctrl+X", "Ctrl+Z", "Ctrl+Y", "Ctrl+S",
  "Ctrl+Shift+S", "Ctrl+A", "Alt+Tab", "Enter", "Escape", "F5"
};

void showStatus() {
  if (!oledAvailable) return;

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println(F("MacroPad"));
  display.println();

  display.print(F("BLE: "));
  display.println(bleKeyboard.isConnected() ? F("Connected") : F("Waiting"));

  display.print(F("Last: "));
  if (lastKey >= 0) {
    display.print(lastKey + 1);
    display.print(F(" - "));
    display.println(KEY_LABELS[lastKey]);
  } else {
    display.println(lastAction);
  }

  display.display();
}

void setIdleLeds() {
  for (uint8_t i = 0; i < RGB_COUNT; ++i) {
    pixels.setPixelColor(i, pixels.Color(0, 8, 18));
  }
  pixels.show();
}

void flashKeyLed(uint8_t index) {
  if (index >= RGB_COUNT) return;
  pixels.setPixelColor(index, pixels.Color(0, 80, 30));
  pixels.show();
}

void sendShortcut(uint8_t index) {
  if (!bleKeyboard.isConnected()) {
    lastAction = "Not connected";
    pixels.setPixelColor(index, pixels.Color(90, 0, 0));
    pixels.show();
    showStatus();
    return;
  }

  switch (index) {
    case 0:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('c'); break;
    case 1:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('v'); break;
    case 2:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('x'); break;
    case 3:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('z'); break;
    case 4:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('y'); break;
    case 5:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('s'); break;
    case 6:
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.press(KEY_LEFT_SHIFT);
      bleKeyboard.press('s');
      break;
    case 7:
      bleKeyboard.press(KEY_LEFT_CTRL); bleKeyboard.press('a'); break;
    case 8:
      bleKeyboard.press(KEY_LEFT_ALT); bleKeyboard.press(KEY_TAB); break;
    case 9:
      bleKeyboard.press(KEY_RETURN); break;
    case 10:
      bleKeyboard.press(KEY_ESC); break;
    case 11:
      bleKeyboard.press(KEY_F5); break;
    default:
      break;
  }

  delay(35);
  bleKeyboard.releaseAll();
  lastKey = index;
  lastAction = KEY_LABELS[index];
  flashKeyLed(index);
  showStatus();
}

void setup() {
  Serial.begin(115200);
  delay(150);

  for (uint8_t i = 0; i < KEY_COUNT; ++i) {
    pinMode(KEY_PINS[i], INPUT_PULLUP);
    keyStates[i].lastRawPressed = (digitalRead(KEY_PINS[i]) == LOW);
    keyStates[i].stablePressed = keyStates[i].lastRawPressed;
    keyStates[i].lastChangeMs = millis();
  }

  pixels.begin();
  pixels.setBrightness(45);
  setIdleLeds();

  Wire.begin(OLED_SDA_PIN, OLED_SCL_PIN);
  oledAvailable = display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
  if (oledAvailable) {
    display.clearDisplay();
    display.display();
  }

  bleKeyboard.begin();
  lastAction = "Booted";
  showStatus();

  Serial.println(F("BLE-MacroPad successfully booted."));
}

void loop() {
  const uint32_t now = millis();

  for (uint8_t i = 0; i < KEY_COUNT; ++i) {
    const bool rawPressed = (digitalRead(KEY_PINS[i]) == LOW);

    if (rawPressed != keyStates[i].lastRawPressed) {
      keyStates[i].lastRawPressed = rawPressed;
      keyStates[i].lastChangeMs = now;
    }

    if ((now - keyStates[i].lastChangeMs) >= DEBOUNCE_MS &&
        rawPressed != keyStates[i].stablePressed) {
      keyStates[i].stablePressed = rawPressed;

      if (keyStates[i].stablePressed) {
        sendShortcut(i);
      }
    }
  }

  static bool previousConnection = false;
  const bool connected = bleKeyboard.isConnected();
  if (connected != previousConnection) {
    previousConnection = connected;
    showStatus();
    Serial.println(connected ? F("BLE keyboard connected") : F("BLE keyboard disconnected"));
  }
  delay(2);
}
