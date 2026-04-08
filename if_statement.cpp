#include <iostream>

int main() {
    // if statements = do something if a condition is true
    //                 if not, then don't do it

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "welcome to the site!";
    }
    else {
        std::cout << "you are not old enough to enter!";
    }

    return 0;
}