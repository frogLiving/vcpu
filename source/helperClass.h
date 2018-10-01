//
//  helperClass.hpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/17/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#ifndef helperClass_h
#define helperClass_h

#include <iostream>
#include <string>

using std::cout;
using std::string;

struct HelperClass
{
    void printGates( string, int, int, int );            // Gate name, value1, value2, passed value
    void printGates( string, int, int, int, int);        // Gate name, value1, value2, value3, passed value
};

#endif /* helperClass_h */
