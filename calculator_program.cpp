#include <iostream>

int main() {
    // calculator program

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********\n";

    std::cout << "enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "enter number 1: ";
    std::cin >> num1;

    std::cout << "enter number 2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        default:
            std::cout << "that wasn't a valid response\n";
            break;
    }

    std::cout << "********************************";

    return 0;
}