#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    // Lab Problem 1
    std::cout << "Lab Problem 1: \n";

    std::cout << std::fixed
              << std::setprecision(
                     2); // Makes sure the decimal formatting is 2 places

    int kph = 40;
    bool lab1 = true;

    std::cout << std::right << std::setw(10) << "KPH" << " | "
              << "MPH\n"; // Setw is used to make sure KPH and MPH are lined up
                          // with the table

    std::cout << "----------------------\n";

    // Using the formula it calculates the mph and displays it increasing per
    // 40-120
    for (kph; kph <= 120; kph += 10)
    {
        double mph = kph * 0.6214;

        std::cout << std::setw(10) << kph << " | " << mph
                  << '\n'; // Setw makes sure all of the table is aligned correctly;
                           // when the table goes into the 100s then the divider
                           // wont be shifted over.
    }

    // Lab Problem 2
    std::cout << " " << std::endl;
    std::cout << "Lab Problem 2: \n";

    bool lab2 = true;

    while (lab2)
    {
        int rows;

        std::cout << "Enter number of temperature rows to display: ";
        std::cin >> rows;

        if (rows > 0)
        {
            // Copying format from Lab problem 1
            std::cout << std::right << std::setw(10) << "Celsius (C)"
                      << " | " << "Fahrenheit (F)\n";

            std::cout << "----------------------\n";

            for (int c = 0; c < rows; c++)
            {
                double F = (9.0 / 5.0) * c + 32; // Does the calculation for Fahrenheiht

                std::cout << std::setw(10) << c
                          << " | " << F << '\n';
            }
            lab2 = false;
        }
        else
        {
            std::cout << "Please enter a valid number (>0)\n";
        }
    }
    return 0;
}