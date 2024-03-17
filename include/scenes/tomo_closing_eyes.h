#ifndef TOMO_SCENES_CLOSING_EYES_H
#define TOMO_SCENES_CLOSING_EYES_H

#include <tomo_scene.h>

class TomoClosingEyesScene : public TomoScene {
public:
    TomoClosingEyesScene();

    void rendition();
    void onInteract();
};

#endif