#include "gates.h"

TwoBits Gates::halfAddr(int a, int b)
{
    TwoBits tempBits;

    tempBits.sum    = xorGate(a, b);
    tempBits.carry  = andGate(a, b);

    return tempBits;
}

TwoBits Gates::fullAddr(int a, int b, int c)
{
    TwoBits tempBits1;
    TwoBits tempBits2;
    TwoBits finalBit;

    tempBits1 = halfAddr( a, b );
    tempBits2 = halfAddr( c, tempBits1.sum );       // Second addr

    finalBit.sum    = tempBits2.sum;
    finalBit.carry  = orGate( tempBits2.carry, tempBits1.carry );

    return finalBit;
}

Byte Gates::byteAddr( Byte high, Byte low, int c )
{
    TwoBits tempBits[8];
    Byte results;

    tempBits[0] = fullAddr( high.one, low.one, c );
    tempBits[1] = fullAddr(high.two, low.two, tempBits[0].carry );
    tempBits[2] = fullAddr(high.three, low.three, tempBits[1].carry );
    tempBits[3] = fullAddr(high.four, low.four, tempBits[2].carry );
    tempBits[4] = fullAddr(high.five, low.five, tempBits[3].carry );
    tempBits[5] = fullAddr(high.six, low.six, tempBits[4].carry );
    tempBits[6] = fullAddr(high.seven, low.seven, tempBits[5].carry );
    tempBits[7] = fullAddr(high.eight, low.eight, tempBits[6].carry );

    results.carry   = tempBits[7].carry;
    results.eight   = tempBits[7].sum;
    results.seven   = tempBits[6].sum;
    results.six     = tempBits[5].sum;
    results.five    = tempBits[4].sum;
    results.four    = tempBits[3].sum;
    results.three   = tempBits[2].sum;
    results.two     = tempBits[1].sum;
    results.one     = tempBits[0].sum;

    return results;
}