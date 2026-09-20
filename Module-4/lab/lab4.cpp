/*
  No ai was used in the making of this program, the only thing that was used is
  the class lecture resources, and the online website: cplusplus.com
*/

#include <cmath>
#include <iostream>

int main() {
  int choice;
  bool running = true;
  bool validChecker = false;

  while (running) {
    std::cout << "Geometry Calculator" << std::endl;
    std::cout << " " << std::endl;

    std::cout << "1. Calculate the Area of a Circle" << std::endl;
    std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
    std::cout << "3. Calculate the Area of a Triangle" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "4. Quit" << std::endl;

    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    if (choice == 1) {
      double userCircleRadius;
      double areaCalculation;
      double pi = 3.14159;

      // Loops the user's input until the number is valid
      do {
        std::cout << "Enter the radius of the Circle: ";
        std::cin >> userCircleRadius;
        std::cout << " " << std::endl;

        if (userCircleRadius <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (userCircleRadius <= 0);

      areaCalculation =
          pi * std::pow(userCircleRadius, 2); // Calculates the area of a circle

      std::cout << "The area of a Circle is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    } 
    else if (choice == 2) {
      double areaCalculation;
      double width;
      double height;

      do {
        std::cout << "Enter the height of the Rectangle: ";
        std::cin >> height;
        std::cout << " " << std::endl;

        if (height <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (height <= 0);

      do {
        std::cout << "Enter the width of the Rectangle: ";
        std::cin >> width;
        std::cout << " " << std::endl;

        if (width <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (width <= 0);

      areaCalculation = height * width; // Calculates the area of a rectangle

      std::cout << "The area of a Rectangle is: " << areaCalculation << std::endl;
    } 
    else if (choice == 3) {
      double height;
      double base;
      double areaCalculation;

      do {
        std::cout << "Enter the height of the Triangle: ";
        std::cin >> height;
        std::cout << " " << std::endl;

        if (height <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (height <= 0);

      do {
        std::cout << "Enter the base of the Triangle: ";
        std::cin >> base;
        std::cout << " " << std::endl;

        if (base <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (base <= 0);

      areaCalculation =
          0.5 * height * base; // Calculates the area of a triangle

      std::cout << "The area of a Triangle is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    }

    // The nested if makes it so that the only the numbers between 1-4 are able to be picked
    if (choice >= 1) {
      if (choice <= 4) {
        validChecker = true;
      }
    }

    // If the valid checker is true based on the nested if, it will print the message and loop back to the beginning
    if (!validChecker) {
      std::cout << "Please enter a valid number (1-4)" << std::endl;
    }

    if (choice == 4) {
      running = false;
    }
  }
  return 0;
}