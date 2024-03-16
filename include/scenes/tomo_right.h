#ifndef TOMO_SCENES_RIGHT_H
#define TOMO_SCENES_RIGHT_H

#include <tomo_scene.h>

class TomoRightScene : public TomoScene {
public:
    void rendition();
    void onInteract();
};

#endif