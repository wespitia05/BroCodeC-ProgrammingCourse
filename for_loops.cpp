#include <iostream>

int main() {
    // for loop = loop that will execute a block of code a specified
    //            number of times

    // prints statement 3 times
    for (int i = 1; i <= 3; i++) {
        std::cout << "HAPPY NEW YEAR!\n";
    }

    // count to ten then print statement
    for (int i = 1; i <= 10; i++) {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    // count down to one then print statement
    for (int i = 10; i >= 0; i--) {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    // count to ten in increments of 2 then print statement
    for (int i = 1; i <= 10; i+=2) {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    // count down to one in increments of 3 then print statement
    for (int i = 10; i >= 0; i-=3) {
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    return 0;
}