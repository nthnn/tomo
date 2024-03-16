#ifndef TOMO_SCENE_H
#define TOMO_SCENE_H

#include <tomo_display.h>

#define TOUCH_PIN   19

class TomoScene {
private:
    uint8_t repeatCount = 1;

public:
    bool shouldContinue = true;
    static void initializeTouchPin();

    void render();
    virtual void rendition() = 0;
    virtual void onInteract() = 0;

    void setRepeatCount(uint8_t repeatCount);
    uint8_t getRepeatCount() const;

    template <typename T>
    static void renderScene(uint8_t repeatCount) {
        T scene;
        scene.setRepeatCount(repeatCount);
        scene.render();
    }
};

#endif