#ifndef TOMO_SCENES_INTERRUPT_H
#define TOMO_SCENES_INTERRUPT_H

#include <tomo_scene.h>

typedef enum {
    TOMO_INT_A,
    TOMO_INT_LEFT_LIFT,
    TOMO_INT_RIGHT_LIFT
} tomo_interrupt_animation;

class TomoInterruptScene : public TomoScene {
public:
    TomoInterruptScene();

    void rendition();
    void onInteract();
};

#endif