#include <iostream>
#include <iomanip>
#include <cmath>

double x;

int main() {
    
    std::cout << "Enter an angle in radians: ";
    std::cin >> x;
    
    // Sets the amount of numbers after the decimal to be displayed to a fixed amout of 4
    std::cout << std::fixed << std::setprecision(4);


    /*
        Setw is used in a way so that the numbers line up, I honestly could not explain why these numbers work
        because I just played around with the setw integer until I got a patern where all the numbers were lined up
        in a starcase formation. Then I subracted the amount until they were equal in space length.
    */

    std::cout << "Angle: ";
    std::cout << std::setw(10); 
    std::cout << x << std::endl; // Prints back the users number in a fixed precision of 4  

    std::cout << "Sine: ";
    std::cout << std::setw(11);
    std::cout << sin(x) << std::endl; // Prints back the sine of the users inputed number

    std::cout << "Cosine: ";
    std::cout << std::setw(9);
    std::cout << cos(x) << std::endl; // Prints back the Cosine of the users inputed number

    std::cout << "Tangent: ";
    std::cout << std::setw(8);
    std::cout << tan(x) << std::endl; // Prints back the Tangent of the users inputed number

    return 0;
}