#include <iostream>

void happyBirthday(std::string name) {
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday dear " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
}

int main() {
    // function = a block of reusable code

    std::string name = "william";

    happyBirthday(name);
    happyBirthday(name);

    return 0;
}