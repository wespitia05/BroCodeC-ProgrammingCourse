#include <iostream>

void happyBirthday(std::string name, int age) {
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "happy birthday dear " << name << "!\n";
    std::cout << "happy birthday to " << name << "!\n";
    std::cout << "you are " << age << " years old!\n";
}

int main() {
    // function = a block of reusable code

    std::string name = "william";
    int age = 28;

    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}