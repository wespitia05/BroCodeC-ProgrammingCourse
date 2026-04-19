#include <iostream>

int main() {
    // break = break out of a loop
    // continue = skip current iteration

    // loop through each item from 1-20 and print each number
    for (int i = 1; i <= 20; i++) {
        // if the number = 13, end the for loop
        if (i == 13) {
            break;
        }
        std::cout << i << '\n';
    }

    return 0;
}