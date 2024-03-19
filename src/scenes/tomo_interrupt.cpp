#include <scenes/tomo_angry.h>
#include <scenes/tomo_interrupt.h>
#include <scenes/tomo_interrupta.h>
#include <scenes/tomo_left_lift.h>
#include <scenes/tomo_right_lift.h>

#include <tomo_rng_engine.h>
#include <tomo_scene.h>

TomoInterruptScene::TomoInterruptScene() {
	this->hasNoInterrupt();
}

void TomoInterruptScene::rendition() {
    switch(TomoRNGEngine::get(0, 3)) {
        case TOMO_INT_ANGRY:
            TomoScene::renderScene<TomoAngryScene>();
            break;

        case TOMO_INT_A:
            TomoScene::renderScene<TomoInterruptAScene>();
            break;

        case TOMO_INT_LEFT_LIFT:
            TomoScene::renderScene<TomoLeftLiftScene>();
            break;

        case TOMO_INT_RIGHT_LIFT:
            TomoScene::renderScene<TomoRightLiftScene>();
            break;
    }
}

void TomoInterruptScene::onInteract() { }