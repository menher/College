#include <cctype>
#include <cmath>
#include <iostream>
#include <string>

int main() {
  const std::string burger = "Joe's Gourmet Burgers";
  const std::string pizza = "Main Street Pizza";
  const std::string cafe = "Corner Cafe";
  const std::string italian = "Mama's Fine Italian";
  const std::string kitchen = "The Chef's Kitchen";

  const int VEGETARIAN = 1;
  const int VEGAN = 2;
  const int GLUTEN_FREE = 4;

  char vegetarian;
  char vegan;
  char glutenFree;

  int options = 0;

  std::cout << "Is anyone in your party a vegetarian (y/n)? ";
  std::cin >> vegetarian;
  if (!isalpha(vegetarian)) {
    std::cout << "Anwser must be y or n, please try again." << std::endl;
    return 1;
  }
  std::cout << std::endl;

  std::cout << "Is anyone in your party a vegan (y/n)? ";
  std::cin >> vegan;
  if (!isalpha(vegan)) {
    std::cout << "Anwser must be y or n, please try again." << std::endl;
    return 1;
  }
  std::cout << std::endl;

  std::cout << "Is anyone in your party gluten-free (y/n)? ";
  std::cin >> glutenFree;
  if (!isalpha(glutenFree)) {
    std::cout << "Anwser must be y or n, please try again." << std::endl;
    return 1;
  }
  std::cout << std::endl;

  // If the users picks yes for any of the questions then it makes the numbers
  // associated with the options to add up which displays the restaurants based
  // on the cases
  if (vegetarian == 'y' || vegetarian == 'Y') {
    options = VEGETARIAN;
  }
  if (vegan == 'y' || vegan == 'Y') {
    options = VEGAN;
  }
  if (glutenFree == 'y' || glutenFree == 'Y') {
    options = GLUTEN_FREE;
  }

  switch (options) {
  case 0: {
    // all no's
    std::cout << "Here are your restaurant choices: \n";
    std::cout << burger << ", " << pizza << ", " << cafe << ", " << italian
              << ", " << kitchen << std::endl;
    break;
  }

  case VEGETARIAN: {
    // = 1
    std::cout << "Here are your restaurant choices: \n";
    std::cout << pizza << ", " << cafe << ", " << italian << ", " << kitchen
              << std::endl;
    break;
  }

  case VEGETARIAN + VEGAN: {
    // = 3
    std::cout << "Here are your restaurant choices: \n";
    std::cout << cafe << ", " << kitchen << std::endl;
    break;
  }

  case VEGETARIAN + GLUTEN_FREE: {
    // = 5
    std::cout << "Here are your restaurant choices: \n";
    std::cout << pizza << ", " << cafe << ", " << kitchen << std::endl;
    break;
  }

  case VEGETARIAN + VEGAN + GLUTEN_FREE: {
    // = 7
    std::cout << "Here are your restaurant choices: \n";
    std::cout << kitchen << std::endl;
    break;
  }

  case VEGAN: {
    // = 2
    std::cout << "Here are your restaurant choices: \n";
    std::cout << cafe << ", " << kitchen << std::endl;
    break;
  }

  case VEGAN + GLUTEN_FREE: {
    // = 6
    std::cout << "Here are your restaurant choices: \n";
    std::cout << cafe << ", " << kitchen << std::endl;
    break;
  }

  case GLUTEN_FREE: {
    // = 4
    std::cout << "Here are your restaurant choices: \n";
    std::cout << pizza << ", " << cafe << ", " << kitchen << std::endl;
    break;
  }
  }

  return 0;
}
