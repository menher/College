#include <iomanip>
#include <iostream>

int main() {
  int plan;
  int minutes;

  std::cout << "Enter subscription plan (1, 2, or 3): ";
  std::cin >> plan;
  std::cout << std::endl;

  if (plan < 1 || plan > 3) {
    std::cout << "Plan must be 1, 2, or 3. Please try again." << std::endl;
    return 0;
  }

  std::cout << "Enter total minutes used: ";
  std::cin >> minutes;
  std::cout << std::endl;

  if (minutes < 0) {
    std::cout << "Minutes cannot be below 0. Please try again." << std::endl;
    return 0;
  }

  std::cout << std::fixed
            << std::setprecision(
                   2); // makes sure the decimal formatting is 2 places

  switch (plan) {
  case 1: {
    const double monthlyBase = 29.99;
    const double minutesIncluded = 400;
    const double rate = 0.35;

    const double monthlyBase2 = 49.99;
    const double minutesIncluded2 = 800;
    const double rate2 = 0.30;

    double monthlyBill;
    double monthlyBill2;

    double minutesIncludedCalculation;
    double minutesIncludedCalculation2;

    double saving;
    double saving2;

    // If the person uses under the minutes included, then it means they didn't
    // go over the limit. So they dont have to pay extra.
    if (minutes <= minutesIncluded) {
      minutesIncludedCalculation = 0;
    } else {
      minutesIncludedCalculation = minutes - minutesIncluded;
    }

    // Does the same calculation just for compairing plan 1 and 2.
    if (minutes <= minutesIncluded2) {
      minutesIncludedCalculation2 = 0;
    } else {
      minutesIncludedCalculation2 = minutes - minutesIncluded2;
    }

    monthlyBill = (rate * minutesIncludedCalculation) +
                  monthlyBase; // Calculated the total payment of plan 1

    monthlyBill2 = (rate2 * minutesIncludedCalculation2) +
                   monthlyBase2; // Calculates the total payemnt of plan 2

    std::cout << "Monthly Bill: $";
    std::cout << monthlyBill;
    std::cout << std::endl;

    if (monthlyBill > monthlyBill2) {
      // Subtracting the total gets you the amout the user will save
      saving = monthlyBill - monthlyBill2;

      // Since the only payment needed for plan 3 is 59.99 due to the rest being
      // unlimited, you only have to subtract by the total of plan 3
      saving2 = monthlyBill - 59.99;

      std::cout << "You would save $" << saving << " by upgrading to Plan 2."
                << std::endl;
      std::cout << "You would save $" << saving2 << " by upgrading to Plan 3."
                << std::endl;
    }

    break;
  }
  case 2: {
    const double monthlyBase = 49.99;
    const double minutesIncluded = 800;
    const double rate = 0.30;

    double monthlyBill;
    double minutesIncludedCalculation;

    double saving;

    // Does the same calculation as in case one, just this isnt for comparing to
    // another plan.
    if (minutes <= minutesIncluded) {
      minutesIncludedCalculation = 0;
    } else {
      minutesIncludedCalculation = minutes - minutesIncluded;
    }

    monthlyBill = (rate * minutesIncludedCalculation) +
                  monthlyBase; // Calcuates the total cost on plan 2

    std::cout << "Monthly Bill: $";
    std::cout << monthlyBill;
    std::cout << std::endl;

    // Plan 3 is only 59.99, so the only thing you need to check is if the user
    // will save money if they switch to plan 3
    if (monthlyBill > 59.99) {
      saving = monthlyBill - 59.99;
      std::cout << "You would save $" << saving << " by upgrading to Plan 3."
                << std::endl;
    }
    break;
  }
  case 3: {
    const double monthlyBase = 59.99;

    double monthlyBill = monthlyBase;

    std::cout << "Monthly Bill: $";
    std::cout << monthlyBill;
    std::cout << std::endl;
    break;
  }
  }
  return 0;
}
