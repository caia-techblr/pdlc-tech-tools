#ifndef __LED_H
#define __LED_H

#include<stdint.h>
#include<stdbool.h>

void initialize(uint8_t pin);
void turnOn(uint8_t pin);
void turnOff(uint8_t pin);
void toggle(uint8_t pin);
bool status(uint8_t pin);

#endif
