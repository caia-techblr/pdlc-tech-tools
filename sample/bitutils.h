#ifndef __BITUTILS_H
#define __BITUTILS_H

#include<stdint.h>
#include<stdbool.h>

inline void set(uint32_t val, uint8_t pos)
{
  val |= (1<<pos);
}
inline void reset(uint32_t val, uint8_t pos)
{
  val &= ~(1<<pos);
}
inline void toggle(uint32_t val, uint8_t pos)
{
  val ^= (1<<pos);
}
inline bool status(uint32_t val, uint8_t pos)
{
  return val &= (1<<pos);
}

#endif
