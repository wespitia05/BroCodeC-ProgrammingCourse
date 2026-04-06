#include <iostream>
#include <cmath>

int main() {
    // useful math related functions

    double x = 3.14;
    double y = 4.97;
    double z;

    // z = std::max(x, y); // returns greater value
    // z = std::min(x, y); // returns greater value
    // std::cout << z << '\n';

    // z = pow(2, 3); // 2^3
    // z = sqrt(9); // squareroot of 9 = 3
    // z = abs(-3); // returns absolute value
    // z = round(x); // round number in general (up or down)
    // z = ceil(x); // round number up only
    z = floor(x); // round number down only
    std::cout << z << '\n';

    return 0;
}