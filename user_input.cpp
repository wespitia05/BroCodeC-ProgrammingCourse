#include <iostream>

int main() {
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;

    std::cout << "what is your name?: ";
    std::cin >> name;

    std::cout << "hello " << name;

    return 0;
}