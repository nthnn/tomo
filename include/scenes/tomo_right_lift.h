#ifndef TOMO_SCENES_RIGHT_LIFT_H
#define TOMO_SCENES_RIGHT_LIFT_H

#include <tomo_scene.h>

class TomoRightLiftScene : public TomoScene {
public:
    TomoRightLiftScene();

    void rendition();
    void onInteract();
};

#endif