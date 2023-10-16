#ifndef cube_header
#define cube_header
#include <iostream> 

struct Cube {
    double sl, sumSL, surfaceArea, volume;

    void SAcalculator() {
        int* slptr = new int;
        *slptr = 6;
        
        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Side Length: ";
        std::cin >> sl; 

        sumSL = sl * sl;
        surfaceArea = *slptr * sumSL;

        std::cout << "\n" << surfaceArea << " square units" << std::endl;
        delete slptr;
    }

    void VolumeCalculator() {
        int* slptr = new int;
        *slptr = 3;
        
        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Side Length: ";
        std::cin >> sl;

        sumSL = sl * sl;
        volume = sumSL * sl;

        std::cout << "\n" << volume << " cubic units" << std::endl;
        delete slptr;
    }
};
#endif