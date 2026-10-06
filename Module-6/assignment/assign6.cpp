#include <iostream>
#include <iomanip>

int main()
{
    int days;
    double startingPay;

    bool doubleToggle = true;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Enter the number of days: ";
    std::cin >> days;

    // Asks the days until the number is valid
    while (days < 1 || days > 31)
    {
        std::cout << "Invalid input, there are no days before 1 or after 31 \n";
        std::cout << "Enter the number of days: ";
        std::cin >> days;
    }

    std::cout << "Enter the starting pay: ";
    std::cin >> startingPay;

    // Asks the starting pay until the number is valid
    while (startingPay < 1)
    {
        std::cout << "Invalid input, please enter a positive number\n";
        std::cout << "Enter the starting pay: ";
        std::cin >> startingPay;
    }

    double totalPay = startingPay;

    std::cout << " ";

    std::cout << std::left << std::setw(8)  << "Day";
    std::cout << std::left << std::setw(18) << "Daily Pay ($)";
    std::cout << std::left << std::setw(22) << "Cumulative Total ($)" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    std::cout << std::left << std::setw(8)  << 1;
    std::cout << std::left << std::setw(18) << startingPay;
    std::cout << std::left << std::setw(22) << totalPay << std::endl;

    // Loops every day the user inputed
    for (int startingDay = 2; startingDay <= days; ++startingDay)
    {
        // If double it so then it doubles the pay the user input
        if (doubleToggle)
        {
            startingPay *= 2;
        }
        else
        {
            startingPay *= 3;
        }

        doubleToggle = !doubleToggle; // Alternates each day between doubling and tripling the pay based on even or odd.
        totalPay += startingPay; // Adds the new payment to the total after double calculations

        std::cout << std::left << std::setw(8)  << startingDay;
        std::cout << std::left << std::setw(18) << startingPay;
        std::cout << std::left << std::setw(22) << totalPay << std::endl;
    }
    return 0;
}