//
//  helperClass.cpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/17/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#include "helperClass.h"

void HelperClass::printGates(string entry, int a, int b, int value)
{
    cout << entry << " value is (" << a << ", " << b << ") = " << value << "\n";
}

void HelperClass::printGates(string entry, int a, int b, int c, int value)
{
    cout << entry << " value is (" << a << ", " << b << ", " << c << ") = " << value << "\n";
}
