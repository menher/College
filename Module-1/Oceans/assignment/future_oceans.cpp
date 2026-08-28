#include <iostream>

int main() {
  // Declares the variables to store for the calculations
  float millimeters;
  float years;
  float calculation;
  float centimeters;
  float inches;

  // Sets the numbers needed for easier calculation
  millimeters = 3.3;
  years = 15;

  // Calculates the levels over the span of years in millimeters, centimeters,
  // and inches
  calculation = millimeters * years;
  centimeters = calculation * 0.1;
  inches = centimeters * 0.3937;

  // Prints calculation results
  std::cout << "Future ocean Levels: " << std::endl;
  std::cout << "Millimeters risen in 15 years: ";
  std::cout << calculation << std::endl;
  std::cout << "Centimeters risen: ";
  std::cout << centimeters << std::endl;
  std::cout << "Inches risen: ";
  std::cout << inches << std::endl;
}
