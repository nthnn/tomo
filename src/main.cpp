#include <tomo_app.h>
#include <tomo_display.h>

void setup() {
    TomoApp::setupUtilities();
    TomoDisplay::renderSplashScreen();
}

void loop() {
    TomoApp::run();
}