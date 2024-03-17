#include <scenes/tomo_blink.h>
#include <scenes/tomo_left.h>
#include <scenes/tomo_rest.h>
#include <scenes/tomo_right.h>

#include <tomo_app.h>
#include <tomo_rng_engine.h>

void TomoApp::setupUtilities() {
    TomoScene::initializeTouchPin();
    TomoRNGEngine::initializeEngine();

    if(!TomoDisplay::initialize())
        while(true);
}

void TomoApp::run() {
    switch(TomoRNGEngine::get(0, 3)) {
        case TOMO_BLINK:
            TomoScene::renderScene<TomoBlinkScene>(
                TomoRNGEngine::get(0, 6)
            );
            break;

        case TOMO_LEFT:
            TomoScene::renderScene<TomoLeftScene>(1);
            break;

        case TOMO_REST:
            TomoScene::renderScene<TomoRestScene>(1);
            break;

        case TOMO_RIGHT:
            TomoScene::renderScene<TomoRightScene>(1);
            break;
    }
}