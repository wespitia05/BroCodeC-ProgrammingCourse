#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    //                   implicit = automatic
    //                   explicit = precede value with new data type (int)

    double x = (int) 3.14;

    std::cout << x << '\n';

    return 0;
}