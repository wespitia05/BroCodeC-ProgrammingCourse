#include <iostream>

int main() {
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "what is your name?: ";
    std::cin >> name;

    std::cout << "what is your age?: ";
    std::cin >> age;

    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';

    return 0;
}