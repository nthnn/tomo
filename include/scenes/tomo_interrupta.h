#ifndef TOMO_SCENES_INTERRUPTA_H
#define TOMO_SCENES_INTERRUPTA_H

#include <tomo_scene.h>

class TomoInterruptAScene : public TomoScene {
public:
    TomoInterruptAScene();

    void rendition();
    void onInteract();
};

#endif