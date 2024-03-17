#ifndef TOMO_SCENES_LEFT_LIFT_H
#define TOMO_SCENES_LEFT_LIFT_H

#include <tomo_scene.h>

class TomoLeftLiftScene : public TomoScene {
public:
    TomoLeftLiftScene();

    void rendition();
    void onInteract();
};

#endif