#include "intermediateGates.h"

// 8-bit or gate
int or8(int* data)
{
    int one     = orGate(data[1], data[2]);
    int two     = orGate(data[3], data[4]);
    int three   = orGate(data[5], data[6]);
    int four    = orGate(data[7], data[8]);

    // Final results    
    return orGate(orGate(one, two), orGate(three, four));
}

// 16-bit not gate
int* not16(int* data)
{
    int *results = new int[bits16];

    for (int i = 0; i < bits16; i++)
        results[i] = notGate(data[i]);

    return results;
}

// 16-bit and gate (LSB)
int* and16(int* data1, int* data2)
{
    int *results = new int[bits16];

    for(int i = 0; i < bits16; i++)
        results[i] = andGate(data1[i], data2[i]);

    return results;
}

// 16-bit or gate (LSB)
int* or16(int* data1, int* data2)
{
    int *results = new int[bits16];

    for(int i = 0; i < bits16; i++)
        results[i] = orGate(data1[i], data2[i]);

    return results;
}