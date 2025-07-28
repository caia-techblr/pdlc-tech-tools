#include "myled.c"
#include "bitutils.h"

const int max_leds = 8;
static uint8_t led_state;

void turnOn_led(uint8_t pin)
{
  set(led_state,pin);
}
void turnOff_led(uint8_t pin)
{
  reset(led_state,pin);
}
void toggle_led(uint8_t pin)
{
  toogle(led_state,pin);
}
bool led_status(uint8_t pin)
{
  return status(led_state,pin);
}
