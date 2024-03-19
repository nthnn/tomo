#include <scenes/tomo_closing_eyes.h>
#include <scenes/tomo_exhausted.h>
#include <scenes/tomo_opening_eyes.h>
#include <scenes/tomo_rest.h>
#include <scenes/tomo_sleeping.h>

#include <tomo_rng_engine.h>
#include <tomo_scene.h>

TomoRestScene::TomoRestScene() {
	this->hasNoInterrupt();
}

void TomoRestScene::rendition() {
	if(TomoScene::renderScene<TomoClosingEyesScene>())
        return;

    if(TomoScene::renderScene<TomoExhaustedScene>())
        return;

    if(TomoScene::renderScene<TomoSleepingScene>(TomoRNGEngine::get(0, 12)))
        return;

	if(TomoScene::renderScene<TomoOpeningEyesScene>())
        return;
}

void TomoRestScene::onInteract() { }