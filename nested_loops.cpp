#include <iostream>

int main() {
    /*
        loop() {
            loop() {

            }
        }
    */
    
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 10; j++) {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows?: ";
    std::cin >> rows;
    std::cout << "how many columns?: ";
    std::cin >> columns;
    std::cout << "enter a symbol to use: ";
    std::cin >> symbol;

    return 0;
}