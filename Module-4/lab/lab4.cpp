

/*
  No ai was used in the making of this program, the only thing that was used is in class lectures, and the online documentation of c++ (Cplusplus.com)
*/
#include <cmath>
#include <iostream>

int main() {
  int choice;
  bool running = true;

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

      areaCalculation = pi * std::pow(userCircleRadius, 2); // Calculates the area of a circle

      std::cout << "The area is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    }

    if (choice == 2) {
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

      std::cout << "The area is: " << areaCalculation << std::endl;
    }

    if (choice == 3) {
      double length;
      double width;
      double areaCalculation;

      do {
        std::cout << "Enter the length of the Triangle: ";
        std::cin >> length;
        std::cout << " " << std::endl;

        if (length <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (length <= 0);

      do {
        std::cout << "Enter the width of the Triangle: ";
        std::cin >> width;
        std::cout << " " << std::endl;

        if (width <= 0) {
          std::cout << "Please enter a number higher than zero" << std::endl;
        }
      } while (width <= 0);

      areaCalculation = 0.5 * length * width; // Calculates the area of a triangle

      std::cout << "The area is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    }

    if (choice <= 0) {
      std::cout << "Please enter a valid number (1-4)" << std::endl;
    }

    if (choice > 4) {
      std::cout << "Please enter a valid number (1-4)" << std::endl;
    }

    if (choice == 4) {
      return 0;
    }
  }
}