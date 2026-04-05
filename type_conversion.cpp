#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    //                   implicit = automatic
    //                   explicit = precede value with new data type (int)

    double x = (int) 3.14;
    char y = 100; // implicitly cast 100 to character d using ascii table

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << (char) 100; // explicitly cast the number to character

    return 0;
}