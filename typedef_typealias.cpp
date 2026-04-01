#include <iostream>
#include <vector>

typedef std::string text_t;

int main() {
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           new identifier for an existing type
    //           helps with readability and reduces typos

    text_t firstName = "william";
    std::cout << firstName << '\n';

    return 0;
}