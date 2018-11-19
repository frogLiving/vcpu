#ifndef Gates_H
#define Gates_H

#include "basicGates.h"

// create a struct to hold data
struct TwoBits
{
    int sum;
    int carry;
};

struct Byte
{
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;
    int eight;
    int carry;
};

// Intermedate gates

class Gates : public BasicGates
{
private:
public:
    TwoBits halfAddr(int a, int b);
    TwoBits fullAddr(int a, int b, int x);
    Byte byteAddr( Byte, Byte, int );
};

#endif // Gates_H