#ifndef TOMO_SCENE_H
#define TOMO_SCENE_H

#include <tomo_display.h>

#define TOUCH_PIN   19

class TomoScene {
private:
    bool _hasInterrupt = true,
        _interruptEnabled = true;
    uint8_t repeatCount = 1;

public:
    static void initializeTouchPin();

    void render();
    virtual void rendition() = 0;
    virtual void onInteract() = 0;

    void disableInterrupt();
    void hasNoInterrupt();
    bool hasInterrupt();
    bool wasInterrupted();

    void setRepeatCount(uint8_t repeatCount);
    uint8_t getRepeatCount() const;

    template <typename T>
    static bool renderScene(uint8_t repeatCount = 1, bool interruptEnabled = true) {
        T scene;
        if(!interruptEnabled)
            scene.disableInterrupt();

        scene.setRepeatCount(repeatCount);
        scene.render();

        return scene.wasInterrupted();
    }
};

#endif