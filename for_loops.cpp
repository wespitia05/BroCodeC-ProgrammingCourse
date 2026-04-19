#include <iostream>

int main() {
    // for loop = loop that will execute a block of code a specified
    //            number of times

    // prints statement 3 times
    for (int i = 1; i <= 3; i++) {
        std::cout << "HAPPY NEW YEAR!\n";
    }

    // count to ten then print statement
    for (int i = 1; i<= 10; i++) {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    return 0;
}