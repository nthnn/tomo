#include <scenes/tomo_blink.h>
#include <scenes/tomo_closing_eyes.h>
#include <scenes/tomo_interrupt.h>
#include <scenes/tomo_opening_eyes.h>

#include <tomo_scene.h>

TomoBlinkScene::TomoBlinkScene() { }

void TomoBlinkScene::rendition() {
	if(TomoScene::renderScene<TomoClosingEyesScene>())
		return;

	if(TomoScene::renderScene<TomoOpeningEyesScene>())
		return;
}

void TomoBlinkScene::onInteract() {
	TomoScene::renderScene<TomoInterruptScene>();
}