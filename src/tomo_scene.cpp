#include <tomo_scene.h>

bool shouldContinue = true,
    interrupted = false;

void IRAM_ATTR touchInterruptWrapper() {
    if(shouldContinue)
        shouldContinue = false;
}

void TomoScene::disableInterrupt() {
    this->_interruptEnabled = false;
}

void TomoScene::hasNoInterrupt() {
    this->_hasInterrupt = false;
}

void TomoScene::initializeTouchPin() {
    pinMode(TOUCH_PIN, INPUT);
    attachInterrupt(TOUCH_PIN, touchInterruptWrapper, HIGH);
}

void TomoScene::render() {
    shouldContinue = true;
    interrupted = false;

    for(uint8_t i = 0; i < this->getRepeatCount(); i++) {
        if(!shouldContinue && this->_hasInterrupt && this->_interruptEnabled) {
            interrupted = true;
            this->onInteract();
            break;
        }

        this->rendition();
    }
}

bool TomoScene::wasInterrupted() {
    return interrupted;
}

void TomoScene::setRepeatCount(uint8_t repeatCount) {
    this->repeatCount = repeatCount;
}

uint8_t TomoScene::getRepeatCount() const {
    return this->repeatCount;
}