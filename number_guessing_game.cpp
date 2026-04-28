#include <iostream>

int main() {
    // number guessing game

    int num;
    int guess;
    int tries;

    // will return a random number between 1-100
    srand(time(NULL));
    num = (rand() % 100) + 1;

    return 0;
}