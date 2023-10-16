#ifndef dodecahedrons_header
#define dodecahedrons_header
#include <iostream>
#include <math.h>

struct Dodecahedrons {
    double sl, sumSL, surfaceArea;
    float sumVol, total, volume;

    void SAcalculator() {
        int* slptr1 = new int;
        *slptr1 = 3;
        int* slptr2 = new int;
        *slptr2 = 9;

        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Side Length: ";
        std::cin >> sl;

        sumSL = sl * sl;
        surfaceArea = *slptr1 * sqrt(25) + *slptr2 * sumSL;
        
        std::cout << "\n" << surfaceArea << " square units" << std::endl;
        delete slptr1;
        delete slptr2;
    }

    void VolumeCalculator() {
        int* slptr1 = new int;
        *slptr1 = 15;
        int* slptr2 = new int;
        *slptr2 = 7;
        int* slptr3 = new int;
        *slptr3 = 4;

        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Side Length: ";
        std::cin >> sl;  

        total = sl * sl;
        sumSL =  total * sl;
        sumVol = *slptr1 + *slptr2 * sqrt(5);
        volume = sumVol / *slptr3 * sumSL;

        std::cout << "\n" << volume << " cubic units" << std::endl;
        delete slptr1;
        delete slptr2;
        delete slptr3;
    }
};
#endif