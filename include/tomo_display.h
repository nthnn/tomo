#ifndef TOMO_DISPLAY_H
#define TOMO_DISPLAY_H

#include <Adafruit_SSD1306.h>
#include <stdint.h>
#include <Wire.h>

#define SCREEN_WIDTH    128
#define SCREEN_HEIGHT   64

#define OLED_RESET      -1
#define SCREEN_ADDRESS  0x3C

typedef Adafruit_SSD1306 OLED;

static OLED tomoDisplay(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

class TomoDisplay final {
public:
    static bool initialize();

    static void renderBitmap(const uint8_t* bitmap);
    static void renderSplashScreen();
    static void clear();

    static void turnOn();
    static void turnOff();
};

#endif