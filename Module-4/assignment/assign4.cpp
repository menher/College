


// No ai was used in the making of this program, the only tools that were used was class lectures, and referencing old labs and assignments for help.

#include <iomanip>
#include <iostream>

int main() {
  double weight;
  double milesRate;
  double distance;
  double boatMilesRate;
  double total;

  bool methodChecker = false;
  bool distanceChecker = false;
  bool weightChecker = false;

  const double MILE_RATE1 = 2.18;
  const double MILE_RATE2 = 3.99;
  const double MILE_RATE3 = 5.25;
  const double MILE_RATE4 = 7.66;

  std::string method;

/*
    I took the easy way out in trying to make sure looping worked since this was somewhat rushed. 
    Everything is inside of a while loop to make sure if the user inputs something invalid then the program will ask them again.
*/


  while (true) {
    std::cout << std::fixed << std::setprecision(2); // Makes sure the outputs are 2 decimals

    std::cout << "Enter shipping method (Airplane/Boat (case-sensitive)): ";
    std::cin >> method;
    std::cout << " " << std::endl;

    if (method == "Boat") {
      methodChecker = true;
      break;
    } else if (method == "Airplane") {
      methodChecker = true;
      break;
    }

    if (methodChecker == false) {
      std::cout << "Please enter a valid method." << std::endl;
    }
  }

  while (true) {
    std::cout << "Enter shipping distance in miles: ";
    std::cin >> distance;
    std::cout << " " << std::endl;

    if (distance > 0) {
      distanceChecker = true;
      break;
    }

    if (distanceChecker == false) {
      std::cout << "Please enter a valid number (>0)." << std::endl;
    }
  }

  while (true) {
    std::cout << "Enter package weight in pounds: ";
    std::cin >> weight;
    std::cout << " " << std::endl;

    if (weight > 0) {
      weightChecker = true;
      break;
    }

    if (weightChecker == false) {
      std::cout << "Please enter a valid number (>0)." << std::endl;
    }
  }

  // These nested if statments do all of the calculation. 
  if (weight <= 2500) {
    milesRate = MILE_RATE1;
    // If the method the user picked is boat, then the shipping cost will be halfed
    if (method == "Boat") {
      boatMilesRate = milesRate * 0.5;
      total = boatMilesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
    // If the user picked airplane then the program will calculate the total at full price
    if (method == "Airplane") {
      total = milesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
  }
  if (weight <= 3700) {
    milesRate = MILE_RATE2;
    if (method == "Boat") {
      boatMilesRate = milesRate * 0.5;
      total = boatMilesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
    if (method == "Airplane") {
      total = milesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
  }
  if (weight <= 10500) {
    milesRate = MILE_RATE3;
    if (method == "Boat") {
      boatMilesRate = milesRate * 0.5;
      total = boatMilesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
    if (method == "Airplane") {
      total = milesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
  } 
  else {
    milesRate = MILE_RATE4;
    if (method == "Boat") {
      boatMilesRate = milesRate * 0.5;
      total = boatMilesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
    if (method == "Airplane") {
      total = milesRate * distance;

      std::cout << "Shipping Cost: $";
      std::cout << total << std::endl;
      return 0;
    }
  }
}