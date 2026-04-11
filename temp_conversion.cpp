#include <iostream>

int main() {
    // temperature conversion program

    double temp;
    char unit;

    std::cout << "********** TEMPERATURE CONVERSION **********\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    std::cout << "********************************************";

    return 0;
}