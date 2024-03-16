#ifndef TOMO_SCENES_LEFT_H
#define TOMO_SCENES_LEFT_H

#include <tomo_scene.h>

class TomoLeftScene : public TomoScene {
public:
    void rendition();
    void onInteract();
};

#endif