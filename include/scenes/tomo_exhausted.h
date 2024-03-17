#ifndef TOMO_SCENES_EXHAUSTED_H
#define TOMO_SCENES_EXHAUSTED_H

#include <tomo_scene.h>

class TomoExhaustedScene : public TomoScene {
public:
    void rendition();
    void onInteract();
};

#endif