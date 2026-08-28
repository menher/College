#include <iostream>

int main() {
  // Declares the variables to store for the calculations
  float millimeters;
  float centimeters;
  float inches;
  float years;
  float calculation;

  // Stores the numbers needed for easier calculation
  millimeters = 1.8;
  years = 100;

  // Calculates the levels over the span over 100 years in millimeters,
  // centimeters, and inches
  calculation = millimeters * years;
  centimeters = calculation * 0.1;
  inches = centimeters * 0.3937;

  // Prints the calculation results
  std::cout << "Past ocean levels: " << std::endl;
  std::cout << "Millimeters risen in 100 years: ";
  std::cout << calculation << std::endl;
  std::cout << "Centimeters risen: ";
  std::cout << centimeters << std::endl;
  std::cout << "Inches risen: ";
  std::cout << inches << std::endl;
}
