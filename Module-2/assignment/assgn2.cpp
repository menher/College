/*
Author name: (name here)
Assignment name: (name here)
Date: 09/03/2006
Note: (note here)
*/

#include <iostream>

int main() {
   // Exercise 1
    std::cout << "EXERCISE 1: " << std::endl; 
    double x = 7.94; double y = 7.53;

    std::cout << "x = ";
    std::cout << x << std::endl;


    std::cout << "y = ";
    std::cout << y << std::endl;

    std::cout << "does x = y?: ";
    std::cout << (x == y) << std::endl; // You can see here that x does not equal y because of the different decimals

    std::cout << "---------------------------" << std::endl;

    /*
        When you change the double to an integer it cuts off the decimals since the integer
        variable can only hold whole numbers. This causes anything past the decimal point to be
        programmatically discarded.
    */

    int xFraction;
    int yFraction;

    xFraction = x;
    yFraction = y;

    std::cout << "x (fraction) = ";
    std::cout << xFraction << std::endl;

    std::cout << "y (fraction) = ";
    std::cout << yFraction << std::endl;

    std::cout << "does x = y after discarding the fractional parts?: ";
    std::cout << (xFraction == yFraction) << std::endl; // after the fractional parts were discarded it leaves only whole numbers, meaning they equal because both are 7

    std::cout << " " << std::endl;

    // Exercise 2
    std::cout << "EXERCISE 2: " << std::endl; 
    int a;

    /*
        This was before giving "a" a number, yet the memory allocation is still 4 bytes even
        after assigning a integer to "a". My conclusion is that the memory allocated is stored 
        in the variable itself rather tham what's assigned to the variable.
    */
    std::cout << "sizeof a before assigning number= ";
    std::cout << sizeof(a); // tells us that the computer reserves 4 bytes
    std::cout << " bytes" << std::endl;

    a = 17;

    std::cout << "sizeof a after assigning number= ";
    std::cout << sizeof(a); // this also tells us that the computer reserves 4 bytes
    std::cout << " bytes" << std::endl;

    return 0;
}
