#ifndef __LED_H
#define __LED_H

#include<stdint.h>
#include<stdbool.h>

void initializeLED(uint8_t pin);
void turnOnLED(uint8_t pin);
void turnOffLED(uint8_t pin);
void toggleLED(uint8_t pin);
bool status(uint8_t pin);

#endif
