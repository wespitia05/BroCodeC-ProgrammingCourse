#include <iostream>

int main() {
    // && = check if two conditions are true
    // || check if at least one of the two conditions is true
    // !  = reverses the logical state of its operand

    int temp;

    std::cout << "enter the temperature: ";
    std::cin >> temp;

    // both conditions must be true using &&
    if(temp > 0 && temp < 30) {
        std::cout << "the temperature is cold";
    }
    else {
        std::cout << "the temperature is ok";
    }

    // only one condition has to be true using ||
    if(temp <= 0 || temp >= 30) {
        std::cout << "the temperature is bad";
    }
    else {
        std::cout << "the temperature is good";
    }

    return 0;
}