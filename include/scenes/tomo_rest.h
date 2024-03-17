#ifndef TOMO_SCENES_REST_H
#define TOMO_SCENES_REST_H

#include <tomo_scene.h>

class TomoRestScene : public TomoScene {
public:
    void rendition();
    void onInteract();
};

#endif