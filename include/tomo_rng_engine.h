#ifndef TOMO_UTIL_H
#define TOMO_UTIL_H

#include <stdint.h>

class TomoRNGEngine final {
public:
    static void initializeEngine();
    static uint8_t get(uint8_t min, uint8_t max);
};

#endif