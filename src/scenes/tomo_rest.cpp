#include <scenes/tomo_closing_eyes.h>
#include <scenes/tomo_exhausted.h>
#include <scenes/tomo_opening_eyes.h>
#include <scenes/tomo_rest.h>
#include <scenes/tomo_sleeping.h>

#include <tomo_scene.h>

TomoRestScene::TomoRestScene() {
	this->hasNoInterrupt();
}

void TomoRestScene::rendition() {
	if(TomoScene::renderScene<TomoClosingEyesScene>(1))
        return;

    if(TomoScene::renderScene<TomoExhaustedScene>(1))
        return;

    if(TomoScene::renderScene<TomoSleepingScene>(12))
        return;

	if(TomoScene::renderScene<TomoOpeningEyesScene>(1))
        return;
}

void TomoRestScene::onInteract() { }