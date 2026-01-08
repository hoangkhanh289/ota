#line 1 "F:\\Arduino\\ota_update\\ota_update.ino"
#include <Arduino.h>
#include <Arduino_GFX_Library.h>

/* ===== LCD CONFIG GIỐNG HỆT V1 ===== */
#define LCD_PWR   15
#define TFT_BL    38
#define TFT_DC     7
#define TFT_CS     6
#define TFT_WR     8
#define TFT_RD     9
#define TFT_RST    5
#define TFT_D0    39
#define TFT_D1    40
#define TFT_D2    41
#define TFT_D3    42
#define TFT_D4    45
#define TFT_D5    46
#define TFT_D6    47
#define TFT_D7    48

#define TFT_W   170
#define TFT_H   320
#define OFF_X1  35
#define OFF_Y1  0
#define OFF_X2  35
#define OFF_Y2  0

Arduino_DataBus *bus = new Arduino_ESP32PAR8Q(
  TFT_DC, TFT_CS, TFT_WR, TFT_RD,
  TFT_D0, TFT_D1, TFT_D2, TFT_D3,
  TFT_D4, TFT_D5, TFT_D6, TFT_D7
);

Arduino_GFX *gfx = new Arduino_ST7789(
  bus, TFT_RST, 0, true,
  TFT_W, TFT_H, OFF_X1, OFF_Y1, OFF_X2, OFF_Y2
);

#line 39 "F:\\Arduino\\ota_update\\ota_update.ino"
void setup();
#line 51 "F:\\Arduino\\ota_update\\ota_update.ino"
void loop();
#line 39 "F:\\Arduino\\ota_update\\ota_update.ino"
void setup() {
  pinMode(LCD_PWR, OUTPUT); digitalWrite(LCD_PWR, HIGH);
  pinMode(TFT_BL, OUTPUT);  digitalWrite(TFT_BL, HIGH);

  gfx->begin();
  gfx->fillScreen(0x001F); // 🔵 XANH
  gfx->setTextColor(0xFFFF);
  gfx->setTextSize(2);
  gfx->setCursor(40, 140);
  gfx->print("VERSION V2");
}

void loop() {}

