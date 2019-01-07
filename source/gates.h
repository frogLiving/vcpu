#ifndef Gates_H
#define Gates_H

#include <iostream>

#include "switches.h"
#include "primGates.h"
#include "dataStructures.h"



// Intermedate gates
class Gates
{
private:
public:
    TwoBits halfAddr(int a, int b);                 // Half addr
    TwoBits fullAddr(int a, int b, int x);          // Full addr
    Byte byteAddr( Byte, Byte, int );               // 8-bit addr
    
};

#endif // Gates_H