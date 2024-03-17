#ifndef TOMO_SCENES_OPENING_EYES_H
#define TOMO_SCENES_OPENING_EYES_H

#include <tomo_scene.h>

class TomoOpeningEyesScene : public TomoScene {
public:
    TomoOpeningEyesScene();

    void rendition();
    void onInteract();
};

#endif