#include <iostream>
#include <iomanip>
#include <cmath>

double r;
double l;
double n;
double rate;
double payment;
double paidBack;
double interestPaid;

int main() {    
    std::cout << "Enter the amount of the loan: ";
    std::cin >> l;

    std::cout << "Enter the interest rate amount: ";
    std::cin >> r;

    std::cout << "Enter the number of payments: ";
    std::cin >> n;

    std::cout << " " << std::endl;

    /*
        Since every 12% = 1% in total (12 = 0.01), you have to divide
        r / 12 by 100 because 1/100 = 0.01 to make ever 12% = 1% to be true.
    */
    rate = r / 12 / 100;

    /*
        The payment equation is "Payment = [ Rate * (1 + Rate)^N / ( (1 + Rate)^N - 1 ) ] * L";
        to make this equation in c++ you have to use std::pow(x,y) to make x to the power of y.
        So you to put the first part of the equation in its own section and then divide it
        by the second part.
    */
    payment = (rate * std::pow((1 + rate),n)) / (std::pow((1 + rate),n) - 1) * l;
    
    paidBack = payment * n; // Calculates the payback amount
    interestPaid = paidBack - l; // Calculates the interest amount

    std::cout << std::fixed << std::setprecision(2);


    /*
        For the setw() I started with the loan amount first and set it to random large number (20),
        then set each of the other outputs to the same number. After that I subtrated the amount
        it would take for the first number of each integer to reach the first number of the load amount
        from each integer until they lined up.
    */
    std::cout << "Loan Amount: $ ";
    std::cout << std::setw(20);
    std::cout<< l << std::endl;

    std::cout << "Monthly Interest Rate: ";
    std::cout << std::setw(8);
    std::cout << rate * 100;
    std::cout << "%" << std::endl;

    std::cout << "Number of Payments: ";
    std::cout << std::setw(12);
    std::cout << n << std::endl;

    std::cout << "Monthly Payment: $ ";
    std::cout << std::setw(14);
    std::cout << payment << std::endl;

    std::cout << "Amount Paid Back: $ ";
    std::cout << std::setw(15);
    std::cout << paidBack << std::endl;

    std::cout << "Interest paid: $ ";
    std::cout << std::setw(17); 
    std::cout << interestPaid << std::endl;

    return 0;
}