#ifndef _IntermediateGates_H
#define _IntermediateGates_H

#include "primGates.h"

// variables
int const bits8     = 8;
int const bits16    = 16;
int const bits32    = 32;
//int* results;

// 8-bit method gates
int or8(int*);

// 16-bit method gates
int* not16(int*);          // 16-bit not gate
int* and16(int*, int*);          // 16-bit and gate
int* or16(int*, int*);           // 16-bit or gate

#endif // _IntermediateGates_H