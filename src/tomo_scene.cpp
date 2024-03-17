#include <tomo_scene.h>

bool shouldContinue = true;
TomoScene* instancePtr = nullptr;

void IRAM_ATTR touchInterruptWrapper() {
    if(instancePtr != nullptr)
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
    instancePtr = this;

    for(uint8_t i = 0; i < this->getRepeatCount(); i++) {
        if(!shouldContinue && this->_hasInterrupt && this->_interruptEnabled) {
            this->onInteract();
            shouldContinue = true;

            break;
        }

        this->rendition();
    }
}

void TomoScene::setRepeatCount(uint8_t repeatCount) {
    this->repeatCount = repeatCount;
}

uint8_t TomoScene::getRepeatCount() const {
    return this->repeatCount;
}