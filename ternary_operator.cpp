#include <iostream>

int main() {
    // ternary operator ? = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;

    if (grade >= 60) {
        std::cout << "you pass";
    }
    else {
        std::cout << "you fail";
    }

    return 0;
}