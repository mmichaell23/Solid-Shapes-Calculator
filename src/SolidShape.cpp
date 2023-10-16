#include <iostream>
#include <memory>
#include "RectangularPrism.h"
#include "Cube.h"
#include "Sphere.h"
#include "Dodecahedrons.h"

using namespace std;

int main() {

    int solid, prompt;

    shared_ptr<RectangularPrism> rectangularprism1(new RectangularPrism());
    shared_ptr<RectangularPrism> rectangularprism2 = rectangularprism1;

    shared_ptr<Cube> cube1(new Cube());
    shared_ptr<Cube> cube2 = cube1;

    shared_ptr<Sphere> sphere1(new Sphere());
    shared_ptr<Sphere> sphere2 = sphere1;
    
    shared_ptr<Dodecahedrons> dodecahedrons1(new Dodecahedrons());
    shared_ptr<Dodecahedrons> dodecahedrons2 = dodecahedrons1;

    cout << "Solid Shapes Calculator" << endl;
    cout << "\nPlease choose among these: [1] Rectangular Prism [2] Cube [3] Sphere [4] Dodecahedrons" << endl;
    cout << "Your input: ";
    cin >> solid;

    switch (solid) {
        case 1:
        cout << "\n[1] Surface Area [2] Volume" << endl;
        cout << "Your input: ";
        cin >> prompt;

        if (prompt == 1) {
            while (true) {
                rectangularprism1 -> SAcalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else if (prompt == 2) {
            while (true) {
                rectangularprism2 -> VolumeCalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else {
            cout << "\nPlease try again...";
        }

        rectangularprism2.reset();
        
        break;

        case 2:
        cout << "\n[1] Surface Area [2] Volume" << endl;
        cout << "Your input: ";
        cin >> prompt;

        if (prompt == 1) {
            while (true) {
                cube1 -> SAcalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else if (prompt == 2) {
            while (true) {
                cube2 -> VolumeCalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else {
            cout << "\nPlease try again...";
        }

        cube2.reset();

        break;

        case 3:
        cout << "\n[1] Surface Area [2] Volume" << endl;
        cout << "Your input: ";
        cin >> prompt;

        if (prompt == 1) {
            while (true) {
                sphere1 -> SAcalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else if (prompt == 2) {
            while (true) {
                sphere2 -> VolumeCalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else {
            cout << "\nPlease try again...";
        }

        sphere2.reset();

        break;

        case 4:
        cout << "\n[1] Surface Area [2] Volume" << endl;
        cout << "Your input: ";
        cin >> prompt;

        if (prompt == 1) {
            while (true) {
                dodecahedrons1 -> SAcalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else if (prompt == 2) {
            while (true) {
                dodecahedrons2 -> VolumeCalculator();
                cout << "\nDo you want to continue?" << endl;
                cout << "[1] Yes [0] No" << endl;
                cout << "Your input: ";
                cin >> prompt;

                cout << "\033[2J\033[1;1H";
                if (prompt == 1) {
                } else if (prompt == 0) {
                    cout << "Exiting...";
                    break;
                } else {
                    cout << "Please try again...";
                    break;
                }
            }
        } else {
            cout << "\nPlease try again...";
        }

        dodecahedrons2.reset();

        break;

    default:
    cout << "Please try again..." << endl;
        break;
    }
}