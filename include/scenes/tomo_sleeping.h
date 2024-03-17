#ifndef TOMO_SCENES_SLEEPING_H
#define TOMO_SCENES_SLEEPING_H

#include <tomo_scene.h>

class TomoSleepingScene : public TomoScene {
public:
    TomoSleepingScene();

    void rendition();
    void onInteract();
};

#endif