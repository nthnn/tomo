#include <Arduino.h>
#include <bootloader_random.h>
#include <tomo_rng_engine.h>

void TomoRNGEngine::initializeEngine() {
    bootloader_random_enable();
    randomSeed(esp_random());
    bootloader_random_disable();
}

uint8_t TomoRNGEngine::get(uint8_t min, uint8_t max) {
    return (uint8_t) random(min, max + 1);
}