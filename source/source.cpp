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
    HelperClass helper;

    
    // Validate that argv is not null
    if( (argc - 1) == 0) { std::cout << "Argv{} is NULL\n"; return 0; }

    cout << "Results of Mux: " << multiplexer(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])) << "\n";
    
    return 0;
}