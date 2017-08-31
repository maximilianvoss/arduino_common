#pragma once

#ifdef DEBUG
#include <Arduino.h>
#define DEBUG_INIT() SerialUSB.begin(9600);
#define DEBUG_MSG(x) SerialUSB.println(x)
#else
#define DEBUG_INIT()
#define DEBUG_MSG(x) 
#endif