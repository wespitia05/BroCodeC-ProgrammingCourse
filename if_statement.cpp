#include <iostream>

int main() {
    // if statements = do something if a condition is true
    //                 if not, then don't do it

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "you are too old to enter!";
    }
    else if (age >= 18) {
        std::cout << "welcome to the site!";
    }
    else if (age < 0) {
        std::cout << "you haven't been born yet!";
    }
    else {
        std::cout << "you are not old enough to enter!";
    }

    return 0;
}