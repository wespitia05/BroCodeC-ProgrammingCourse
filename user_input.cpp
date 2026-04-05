#include <iostream>

int main() {
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;
    std::string fullName;

    std::cout << "what is your name?: ";
    std::cin >> name;

    std::cout << "what is your age?: ";
    std::cin >> age;

    std::cout << "what is your full name?: ";
    // use this method to type characters with spaces
    // >> std::ws removes any newline characters/whitespaces before user input
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';
    std::cout << "full name: " << fullName << '\n';

    return 0;
}