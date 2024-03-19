#ifndef TOMO_SCENES_HAPPY_H
#define TOMO_SCENES_HAPPY_H

#include <tomo_scene.h>

class TomoHappyScene : public TomoScene {
public:
    TomoHappyScene();

    void rendition();
    void onInteract();
};

#endif