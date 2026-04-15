#include <iostream>

int main() {
    // while loop = run some code while a condition is true

    std::string name;

    while (name.empty()) {
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    return 0;
}