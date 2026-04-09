#include <iostream>

int main() {
    // ternary operator ? = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;

    /*
    if (grade >= 60) {
        std::cout << "you pass";
    }
    else {
        std::cout << "you fail";
    }
    */

    // ternary form of the if/else statement
    grade >= 60 ? std::cout << "you pass" : std::cout << "you fail";

    int number = 9;
    number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    return 0;
}