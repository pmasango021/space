#include <iostream>

int main() {
    // Declare and initialise Relative Gravity variables
    int earthWeight = 0;
    double meanGravity= 0.38;
    double venusGravity= 0.91;
    double marsGravity= 0.38;
    double jupiterGravity= 2.34;
    double saturnGravity= 1.06;
    double moonGravity= 0.17;
    double uranusGravity= 0.92;
    double neptuneGravity= 1.19;
    double plutoGravity= 0.06;

    std::cout << "Enter your earth weight: \n"; // Prompt user for input
    std::cin >> earthWeight; // Get user input from the keyboard
    std::cout << "Your weight on Mars is: " << earthWeight * 0.38 << "\n"; // Output user input

    // switch statement

    switch (earthWeight) {
        case 0:
            std::cout << "Your weight on Venus is: " << earthWeight * 0.91 << "\n";
            break;
        case 1:
            std::cout << "Your weight on Mars is: " << earthWeight * 0.38 << "\n";
            break;
        case 2:
            std::cout << "Your weight on Jupiter is: " << earthWeight * 2.34 << "\n";
            break;
        case 3:
            std::cout << "Your weight on Saturn is: " << earthWeight * 1.06 << "\n";
            break;
        case 4:
            std::cout << "Your weight on the Moon is: " << earthWeight * 0.17 << "\n";
            break;
        case 5:
            std::cout << "Your weight on Uranus is: " << earthWeight * 0.92 << "\n";
            break;
        case 6:
            std::cout << "Your weight on Neptune is: " << earthWeight * 1.19 << "\n";
            break;
        case 7:
            std::cout << "Your weight on Pluto is: " << earthWeight * 0.06 << "\n";
            break;
        default:
            std::cout << "Invalid input. Please enter a number between 0 and 7.\n";
    }
}
