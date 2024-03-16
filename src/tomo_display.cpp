#include "tomo_display.h"

const uint8_t tomo_splash_screen[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x87, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1e, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3e, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3e, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1c, 0x0f, 0xf8, 0x00, 0x10, 0x00, 0x18, 0x03, 0xf0, 0x7e, 0x00, 0x00, 0x30, 0x00, 0x00, 
	0x00, 0x18, 0x0f, 0xf8, 0x01, 0xfc, 0x00, 0x3f, 0x07, 0xf9, 0xff, 0x80, 0x01, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x03, 0xff, 0x00, 0x7f, 0x8f, 0xfb, 0xff, 0x80, 0x07, 0xfe, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x07, 0xff, 0x80, 0x7f, 0x9f, 0xff, 0x87, 0xc0, 0x0f, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xff, 0x80, 0x7f, 0x9f, 0xff, 0x03, 0xc0, 0x1f, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x1f, 0xc3, 0x80, 0x7f, 0xfc, 0xfe, 0x03, 0xe0, 0x3f, 0x83, 0x80, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x3f, 0x81, 0x80, 0x7f, 0xf8, 0xfe, 0x03, 0xe0, 0x3f, 0x81, 0x80, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x3f, 0x80, 0x80, 0x7f, 0xf0, 0xfc, 0x07, 0xe0, 0x7f, 0x00, 0x80, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x7f, 0x00, 0xc0, 0x7f, 0xf0, 0xfc, 0x07, 0xe0, 0x7f, 0x00, 0xc0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x7f, 0x00, 0x60, 0x7f, 0xe0, 0xfc, 0x07, 0xe0, 0xfe, 0x00, 0xc0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0x7f, 0x00, 0x70, 0x7f, 0xc0, 0xfc, 0x07, 0xe0, 0xfe, 0x00, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0x00, 0x70, 0x7f, 0xc0, 0xfc, 0x07, 0xe0, 0xfe, 0x00, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0x00, 0x70, 0x7f, 0x80, 0xfc, 0x07, 0xe1, 0xfe, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0x00, 0x70, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xfe, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0x00, 0x78, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xfe, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xf0, 0xff, 0x00, 0x78, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xfe, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xf1, 0xff, 0x00, 0x78, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xff, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe1, 0xff, 0x00, 0x78, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xff, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe1, 0xff, 0x80, 0xf8, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xff, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0xff, 0x80, 0xf8, 0x7f, 0x81, 0xfc, 0x0f, 0xe1, 0xff, 0x01, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0xff, 0xc0, 0xf0, 0x7f, 0x01, 0xfc, 0x0f, 0xe1, 0xff, 0x81, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0xff, 0xc1, 0xf0, 0x7f, 0x01, 0xfc, 0x0f, 0xe1, 0xff, 0x81, 0xf0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0xff, 0xe3, 0xf0, 0x7f, 0x01, 0xfc, 0x0f, 0xe0, 0xff, 0xc3, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0x7f, 0xe7, 0xf0, 0x7f, 0x03, 0xfc, 0x0f, 0xe0, 0xff, 0xe7, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0x7f, 0xff, 0xf0, 0x7f, 0x01, 0xf8, 0x0f, 0xe0, 0xff, 0xff, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0x7f, 0xff, 0xe0, 0x7f, 0x01, 0xf8, 0x0f, 0xc0, 0x7f, 0xff, 0xe0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0x3f, 0xff, 0xe0, 0x7f, 0x01, 0xf8, 0x07, 0xc0, 0x7f, 0xff, 0xc0, 0x00, 
	0x00, 0x00, 0x0f, 0xe0, 0x1f, 0xff, 0xc0, 0x7f, 0x01, 0xf8, 0x07, 0x80, 0x3f, 0xff, 0xc0, 0x00, 
	0x00, 0x00, 0x0f, 0xc0, 0x0f, 0xff, 0xc0, 0x7f, 0x00, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 
	0x00, 0x00, 0x0f, 0xc0, 0x07, 0xff, 0x80, 0x7e, 0x00, 0x20, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xc0, 0x03, 0xff, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x80, 0x00, 0xfc, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

bool TomoDisplay::initialize() {
    bool result = tomoDisplay.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
    if(result)
        tomoDisplay.clearDisplay();

    return result;
}

void TomoDisplay::renderBitmap(const uint8_t* bitmap) {
	TomoDisplay::clear();

    tomoDisplay.drawBitmap(0, 0, bitmap, SCREEN_WIDTH, SCREEN_HEIGHT, WHITE);
    tomoDisplay.display();
}

void TomoDisplay::renderSplashScreen() {
    TomoDisplay::renderBitmap(tomo_splash_screen);
	delay(2500);

	TomoDisplay::clear();
}

void TomoDisplay::clear() {
	tomoDisplay.clearDisplay();
}

void TomoDisplay::turnOn() {
	tomoDisplay.ssd1306_command(SSD1306_DISPLAYALLON);
	TomoDisplay::initialize();
}

void TomoDisplay::turnOff() {
	tomoDisplay.ssd1306_command(SSD1306_DISPLAYOFF);
}