//
//  basicGates.cpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/16/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#include <iostream>

#include "primGates.h"
#include "switches.h"

// Two variable AND Gate function
int andGate(int a, int b)
{
    if(a == 1 && b == 1)
        return 1;
    else
        return 0;
}

// Three variable AND Gate function (overloaded)
int andGate(int a, int b, int c)
{
    if(andGate(a, b) == 1 && c == 1)
        return 1;
    else
        return 0;
}

// Or Gate function
int orGate(int a, int b)
{
    if(a == 1 || b == 1)
        return 1;
    else
        return 0;
}

// Three input OR gate
int orGate(int a, int b, int c)
{
    if( orGate(a, b) == 1 || c == 1)
        return 1;
    else
        return 0;
}

// Not Gate
int notGate(int a)
{
    if(a == 1)
        return 0;
    else
        return 1;
}

// Nor Gate
int norGate(int a, int b)   { return notGate( orGate(a, b) ); }

// Nand Gate
int nandGate(int a, int b)  { return notGate( andGate(a, b) ); }

// XOR Gate
int xorGate(int a, int b)   { return andGate( orGate(a,b), nandGate(a, b) ); }

// XNOR Gate
int xnorGate(int a, int b)  { return notGate( xorGate(a, b) ); }