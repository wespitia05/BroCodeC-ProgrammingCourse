#include <iostream>

int main() {
    // string methods

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // built in length method for strings
    if(name.length() > 12) {
        std::cout << "your name can't be over 12 characters";
    }
    else {
        std::cout << "welcome " << name;
    }

    return 0;
}