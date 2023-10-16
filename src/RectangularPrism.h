#ifndef rectangular_prism_header
#define rectangular_prism_header
#include <iostream> 

struct RectangularPrism {
    double length, width, height;
    double sumLW, sumLH, sumWH, surfaceArea, volume;
   
    void SAcalculator() {
        int* ptrlw = new int;
        *ptrlw = 2;
        int& ptrlh = *ptrlw;
        int& ptrwh = *ptrlw;

        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Length: ";
        std::cin >> length;
        
        std::cout << "Width: ";
        std::cin >> width;  

        std::cout << "Height: ";
        std::cin >> height;

        sumLW = *ptrlw * length * width;
        sumLH = ptrlh * length * height;
        sumWH = ptrwh * width * height;
        surfaceArea = sumLW + sumLH + sumWH;
        std::cout << "\n" << surfaceArea << " square units" << std::endl;
        delete ptrlw;
    }
    
    void VolumeCalculator() {
        std::cout << "\nPlease input the following..." << std::endl;
        std::cout << "Length: ";
        std::cin >> length;
        
        std::cout << "Width: ";
        std::cin >> width;  

        std::cout << "Height: ";
        std::cin >> height;

        volume = length * width * height;
        std::cout << "\n" << volume << " cubic units" << std::endl;
    }
};
#endif