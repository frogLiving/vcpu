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
        cout << "Testing AND16\n";
        int j = 0;
        int *data = new int[bits16];
        int *data2 = new int[bits16];
        int *data3;

        cout << "Argc = " << argc << "\n";
        cout << "Load data from ARGV\n";

        for(int k = 1; k < argc; k++)
        {
            if(k <= 16)     { data[k-1] = atoi(argv[k]); }
            if(k > 16)      { data2[j] = atoi(argv[k]); j++; }
        }

        // Print the results of Data & Data2
        cout << "Data1: ";
        for(int i = 0; i < 16; i++)
            cout << data[i];

        cout << "\nData2: ";
        for(int i = 0; i < 16; i++)
            cout << data2[i];      

        j = 0;      // Reset J back to 0
        cout << "\nLoading data complete\n";
        data3 = and16(data, data2);
        cout << "and16 completed!!\n";

        // Print the results
        for(int i = 0; i < bits16; i++ )
        {
            if(j == 4) { cout << " "; j = 0; }      // Reset J
            cout << data3[i];
            j++;
        }
        cout << "\n";        
    }
    else
        std::cout << "Argv[] is NULL\n";

    return 0;
}