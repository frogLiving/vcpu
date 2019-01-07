#ifndef _SWITCHES_H
#define _SWITCHES_H

#include "dataStructures.h"

// 2-input Multiplexer
int multiplexer(int a, int b, int sel);
TwoBits deMux(int a, int sel);
int fourMux(int a, int b, int c, int d, int sel);
int eightMux(int, int, int, int, int, int, int, int, int);
FourBits fourDeMux(int a, int sel, int sel1);

#endif // _SWITCHES_H