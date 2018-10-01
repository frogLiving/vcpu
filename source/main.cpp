//
//  main.cpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/16/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#include <iostream>
#include "basicGates.h"
#include "helperClass.h"

int main(int argc, const char * argv[])
{
    BasicGates gates;
    HelperClass helper;
    
    int value = -1;
    
    // Validate that argv is not null
    if( (argc - 1) == 0) { std::cout << "Argv{} is NULL\n"; return 0; }
    else
        std::cout << "Count in Argc is: " << argc - 1 << "\n";
    
    for(int i = 1; i < argc; i+=2)
    {
        value = gates.xnorGate( atoi(argv[i]), atoi(argv[i+1]) );
        helper.printGates( "xnorGate", atoi(argv[i]), atoi(argv[i+1]), value );
    }
    
    return 0;
}
