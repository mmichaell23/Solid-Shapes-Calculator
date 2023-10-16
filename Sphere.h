#ifndef sphere_header
#define sphere_header
#include <iostream>

struct Sphere {
    double radius;
    float sumR, surfaceArea, sumVol, total, volume;

    void SAcalculator() {
        int* radiusptr = new int;
        *radiusptr = 4;
        float* pi = new float;
        *pi = 3.14;

        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Radius: ";
        std::cin >> radius;

        sumR = *radiusptr * radius * radius;
        surfaceArea = *pi * sumR;

        std::cout << "\n" << surfaceArea << " square units" << std::endl;
        delete radiusptr;
        delete pi;
    }

    void VolumeCalculator() {
        float* radiusptr = new float;
        *radiusptr = 1.33333333333;
        float* pi = new float;
        *pi = 3.14;

        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Radius: ";
        std::cin >> radius;

        total = radius * radius;
        sumR = total * radius;
        volume = *radiusptr * *pi * sumVol;

        std::cout << "\n" << volume << " cubic units" << std::endl;
        delete radiusptr;
        delete pi;
    }
};
#endif