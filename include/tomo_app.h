#ifndef TOMO_APP_H
#define TOMO_APP_H

#include <tomo_scene.h>

typedef enum {
    TOMO_BLINK,
    TOMO_LEFT,
    TOMO_REST,
    TOMO_RIGHT    
} tomo_facial_animation;

class TomoApp final {
public:
    static void setupUtilities();
    static void run();
};

#endif