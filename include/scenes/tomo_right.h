#ifndef TOMO_SCENES_RIGHT_H
#define TOMO_SCENES_RIGHT_H

#include <tomo_scene.h>

class TomoRightScene : public TomoScene {
public:
    TomoRightScene();

    void rendition();
    void onInteract();
};

#endif