//
//  main.cpp
//  BubbleSort
//
//  Created by Muhammed Karakul on 27.12.2017.
//  Copyright © 2017 Muhammed Karakul. All rights reserved.
//

#include <iostream>
#include <stdlib.h> //for rand() function
using namespace std;

void printArray (int dizi[], int elemanSayisi) {
    cout << "dizi[] = { " ;
    for (int i = 0; i < elemanSayisi; i++) {
        cout << dizi[i] << ", ";
    }
    cout << "}\n";
}

void bubbleSort(int dizi[], int elemanSayisi) {
    int temp,i,j;
    bool is_swap = false;    //is_swap variable is set to true if any swap between any two elements occur   
    printArray(dizi, elemanSayisi);
    
    for (i = 0; i < elemanSayisi; i++) {
         is_swap = false;
        for (j = 0; j < elemanSayisi-i-1; j++) {
            if ( dizi[j] > dizi[j+1] ) {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
                 is_swap = true;
            }
        }
        if (is_swap == false)      //if no swap occurs implies all the elements are in sorted order. No need of conditions to loop to run further. 
        {
          break;   
        }
    }
    
    printArray(dizi, elemanSayisi);
}

int main(int argc, const char * argv[]) {
    
    int ornekDizi[100];
    
    for (int i = 0; i < 100; i++) {
        ornekDizi[i] = rand() % 100 + 1;
    }
    
    bubbleSort(ornekDizi, 100);
    
    return 0;
}
