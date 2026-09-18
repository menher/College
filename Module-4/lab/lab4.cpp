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

    if (std::cin.fail()) {
      std::cin.clear();
      choice = 0;
    }
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (choice == 1) {
      double circleRadius;
      double userCircleRadius;
      double areaCalculation;
      double pi = 3.14159;

      std::cout << "Enter the radius of the circle: ";
      std::cin >> userCircleRadius;

      circleRadius = userCircleRadius;

      areaCalculation = pi * std::pow(circleRadius, 2);

      std::cout << "The area is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    }

    if (choice == 2) {
      double areaCalculation;
      double width;
      double height;

      std::cout << "Enter the height of the Rectangle: ";
      std::cin >> height;
      std::cout << " " << std::endl;

      std::cout << "Enter the width of the Rectangle: ";
      std::cin >> width;
      std::cout << " " << std::endl;

      areaCalculation = height * width;

      std::cout << "The area is: ";
      std::cout << areaCalculation;
      std::cout << " " << std::endl;
    }

    if (choice == 3) {
      double length;
      double width;
      double areaCalculation;

      std::cout << "Enter the length of the Triangle: ";
      std::cin >> length;
      std::cout << " " << std::endl;

      std::cout << "Enter the width of the Triangle: ";
      std::cin >> width;
      std::cout << " " << std::endl;

      areaCalculation = 0.5 * length * width;

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

     if (std::cin.fail()) {
     std::cout << "Please enter a valid number (1-4)" << std::endl;
    }
    
    if (choice == 4) {
      return 0;
    }
  }
}