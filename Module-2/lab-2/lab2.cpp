/* 
* Author name: 
* Lab Name:
* Date:
* Description:
*/

#include <iostream>
#include <string>

int main() {
// lab 1
    std::cout << "Lab Problem 1: " << std::endl;
    std::cout << "Firstname,Lastname" << std::endl;
    std::cout << "---------------------" << std::endl;

// lab 2
    std::cout << "Lab Problem 2: " << std::endl;
    std::string name;
    int score;

    name = "Dallas Cowboys";
    score = 333;

    std::cout << name;
    std::cout << ": ";
    std::cout << score << std::endl;
    std::cout << "---------------------" << std::endl;

// lab 3
    std::string myName;
    int myAge; 
    double myLastMeal;
    bool  superHero;

    myName = "First name";
    myAge = 20;
    myLastMeal = 15.99;
    superHero = true;

// lab 4
    std::cout << "Lab Problem 4: " << std::endl;
    std::cout << "Name:";
    std::cout << myName << std::endl;
    std::cout << "Age: "; 
    std::cout << myAge << std::endl;
    std::cout << "My last meal cost: ";
    std::cout << myLastMeal << std::endl;
    std::cout << "Superhero: ";
    std::cout << superHero << std::endl;
    std::cout << "---------------------" << std::endl;

// lab 5
    myName = "Jared Smith";
    myAge = 44;
    myLastMeal = 10.22;
    superHero = false;

// lab 6
    std::cout << "Lab Problem 6: " << std::endl;
    std::cout << "Name:";
    std::cout << myName << std::endl;
    std::cout << "Age: "; 
    std::cout << myAge << std::endl;
    std::cout << "My last meal cost: ";
    std::cout << myLastMeal << std::endl;
    std::cout << "Superhero: ";
    std::cout << superHero << std::endl;
    std::cout << "---------------------" << std::endl;

// lab 7
    std::cout << "Lab Problem 7: " << std::endl;   
    float sizeName = sizeof(name);
    float sizeScore = sizeof(score);
    float sizeMyName = sizeof(myName);
    float sizeMyAge = sizeof(myAge);
    float sizeMyLastMeal = sizeof(myLastMeal);
    float sizeSuperHero = sizeof(superHero);

    std::cout << "Bytes of name: ";
    std::cout << sizeName << std::endl;
    std::cout << "Bytes of score: ";
    std::cout << sizeScore << std::endl;
    std::cout << "Bytes of myName: ";
    std::cout << sizeMyName << std::endl;
    std::cout << "Bytes of myAge: ";
    std::cout << sizeMyAge<< std::endl;
    std::cout << "Bytes of myLastMeal: ";
    std::cout << sizeMyLastMeal << std::endl;
    std::cout << "Bytes of superHero: ";
    std::cout << sizeSuperHero << std::endl;
    return 0;
}