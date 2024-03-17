#include <scenes/tomo_blink.h>
#include <scenes/tomo_left.h>
#include <scenes/tomo_rest.h>
#include <scenes/tomo_right.h>

#include <tomo_display.h>
#include <tomo_scene.h>

void setup() {
    TomoScene::initializeTouchPin();
    if(!TomoDisplay::initialize())
        while(true);

    TomoDisplay::renderSplashScreen();
    TomoScene::renderScene<TomoBlinkScene>(3);
    TomoScene::renderScene<TomoLeftScene>(1);
    TomoScene::renderScene<TomoRightScene>(1);
    TomoScene::renderScene<TomoBlinkScene>(2);
    TomoScene::renderScene<TomoRestScene>(1);
}

void loop() {
    vTaskDelay(10);
}