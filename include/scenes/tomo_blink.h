#ifndef TOMO_SCENES_BLINK_H
#define TOMO_SCENES_BLINK_H

#include <tomo_scene.h>

class TomoBlinkScene : public TomoScene {
public:
    TomoBlinkScene();

    void rendition();
    void onInteract();
};

#endif