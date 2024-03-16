#include <tomo_scene.h>

TomoScene* instancePtr = nullptr;

void IRAM_ATTR touchInterruptWrapper() {
    if(instancePtr) {
        instancePtr->shouldContinue = false;
        instancePtr->onInteract();
    }
}

void TomoScene::initializeTouchPin() {
    pinMode(TOUCH_PIN, INPUT);
}

void TomoScene::render() {
    instancePtr = this;
    attachInterrupt(TOUCH_PIN, touchInterruptWrapper, HIGH);

    for(uint8_t i = 0; i < this->getRepeatCount(); i++) {
        if(!this->shouldContinue)
            break;

        this->rendition();
    }

    detachInterrupt(TOUCH_PIN);
}

void TomoScene::setRepeatCount(uint8_t repeatCount) {
    this->repeatCount = repeatCount;
}

uint8_t TomoScene::getRepeatCount() const {
    return this->repeatCount;
}