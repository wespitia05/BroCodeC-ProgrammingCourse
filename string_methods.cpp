#include <iostream>

int main() {
    // string methods

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // add to an already existing string
    name.append("@gmail.com");

    std::cout << "your username is now: " << name;

    /*
    // built in length method for strings
    if(name.length() > 12) {
        std::cout << "your name can't be over 12 characters";
    }
    // built in empty method for strings
    else if(name.empty()) {
        std::cout << "you didn't enter your name";
    }
    else {
        // clears any input saved in name variable
        name.clear();
        std::cout << "welcome " << name;
    }
    */

    return 0;
}