#include <iostream>

int main() {
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    // gives us a random number from 1-6
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 10) + 1;
    int num3 = (rand() % 20) + 1;

    std::cout << num1;
    std::cout << num2;
    std::cout << num3;

    return 0;
}