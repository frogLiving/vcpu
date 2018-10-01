//
//  basicGates.h
//  VirtualCPU
//
//  Created by Sean Richards on 4/16/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#ifndef basicGates_h
#define basicGates_h

struct BasicGates
{
    int andGate(int, int);
    int andGate(int, int, int);
    int orGate(int, int);
    int orGate(int, int, int);
    int notGate(int);
    int norGate(int, int);
    int nandGate(int, int);
    int xorGate(int, int);
    int xnorGate(int, int);
};

#endif /* basicGates_h */
