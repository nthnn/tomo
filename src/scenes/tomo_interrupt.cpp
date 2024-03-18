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
    switch(TomoRNGEngine::get(0, 2)) {
        case TOMO_INT_A:
            TomoScene::renderScene<TomoInterruptAScene>(1);
            break;

        case TOMO_INT_LEFT_LIFT:
            TomoScene::renderScene<TomoLeftLiftScene>(1);
            break;

        case TOMO_INT_RIGHT_LIFT:
            TomoScene::renderScene<TomoRightLiftScene>(1);
            break;
    }
}

void TomoInterruptScene::onInteract() { }