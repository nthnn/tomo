#ifndef TOMO_SCENES_ANGRY_H
#define TOMO_SCENES_ANGRY_H

#include <tomo_scene.h>

class TomoAngryScene : public TomoScene {
public:
    TomoAngryScene();

    void rendition();
    void onInteract();
};

#endif