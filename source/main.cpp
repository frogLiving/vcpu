//
//  main.cpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/16/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#include <iostream>
#include "gates.h"
#include "helperClass.h"

int main(int argc, const char * argv[])
{
    Gates gates;
    HelperClass helper;
    TwoBits twoBits;
    Byte high, low, results;
    int carry = { 0 };
    
    int value = { -1 };
    
    // Validate that argv is not null
    if( (argc - 1) == 0) { std::cout << "Argv{} is NULL\n"; return 0; }
    else
    {
        std::cout << "Count in Argc is: " << argc - 1 << "\n";
    }

    high.eight = atoi(argv[1]);         // High bit
    high.seven = atoi(argv[2]);
    high.six = atoi(argv[3]);
    high.five = atoi(argv[4]);
    high.four = atoi(argv[5]);
    high.three = atoi(argv[6]);    
    high.two = atoi(argv[7]);
    high.one = atoi(argv[8]);

    low.eight = atoi(argv[9]);          // High bit
    low.seven = atoi(argv[10]);
    low.six = atoi(argv[11]);
    low.five = atoi(argv[12]);
    low.four = atoi(argv[13]);
    low.three = atoi(argv[14]);
    low.two = atoi(argv[15]);
    low.one = atoi(argv[16]);
    
    results = gates.byteAddr( high, low, carry );
    //helper.printGatesStruct( "FullAddr", atoi(argv[i]), atoi(argv[i+1]), twoBits.sum, twoBits.carry );

    cout << "Results of 8-bit addr: " << results.carry << " : " 
        << results.eight << results.seven << results.six << results.five << " " 
        << results.four << results.three << results.two << results.one << "\n";
    
    return 0;
}