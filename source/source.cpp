//
//  main.cpp
//  VirtualCPU
//
//  Created by Sean Richards on 4/16/18.
//  Copyright © 2018 Bad Frog media. All rights reserved.
//

#include <iostream>
#include "gates.h"
#include "intermediateGates.h"
#include "helperClass.h"

int main(int argc, char * argv[])
{
    HelperClass helper;

    
    // Validate that argv is not null
    if( argc > 1)
    {
        cout << "Testing NOT16\n";
        int j = 0;
        int *data = new int[bits16];
        int *data2 = new int[bits16];
        int *data3;

        for(int k = 1; k <= bits32; k++)
        {
            if(k <= 16)     { data[k] = atoi(argv[k]); }
            else
                data2[k] = atoi(argv[k]);
        }            

        cout << "Loading data complete\n";
        data3 = or16(data, data2);
        cout << "or16 completed!!\n";

        // Print the results
        for(int i = 0; i < bits16; i++ )
        {
            if(j == 4) { cout << " "; j = 0; }      // Reset J
            cout << data2[i];
            j++;
        }
        cout << "\n";        
    }
    else
        std::cout << "Argv[] is NULL\n";

    return 0;
}