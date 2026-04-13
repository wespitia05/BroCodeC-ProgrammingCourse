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
    // built in empty method for strings
    else if(name.empty()) {
        std::cout << "you didn't enter your name";
    }
    else {
        std::cout << "welcome " << name;
    }

    return 0;
}