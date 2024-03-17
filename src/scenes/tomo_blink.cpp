#include <scenes/tomo_blink.h>
#include <scenes/tomo_closing_eyes.h>
#include <scenes/tomo_opening_eyes.h>

#include <tomo_scene.h>

void TomoBlinkScene::rendition() {
	TomoScene::renderScene<TomoClosingEyesScene>(1);
	TomoScene::renderScene<TomoOpeningEyesScene>(1);
}

void TomoBlinkScene::onInteract() { }