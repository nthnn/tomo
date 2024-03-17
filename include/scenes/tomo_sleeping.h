#ifndef TOMO_SCENES_SLEEPING_H
#define TOMO_SCENES_SLEEPING_H

#include <tomo_scene.h>

class TomoSleepingScene : public TomoScene {
public:
    void rendition();
    void onInteract();
};

#endif