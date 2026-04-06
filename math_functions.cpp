#include <iostream>

int main() {
    // useful math related functions

    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y); // returns greater value
    z = std::min(x, y); // returns greater value
    std::cout << z << '\n';

    return 0;
}