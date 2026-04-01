#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;

// this would work the same as typedef
using text_t = std::string;
using number_t = int;

int main() {
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           new identifier for an existing type
    //           helps with readability and reduces typos

    text_t firstName = "william";
    std::cout << firstName << '\n';

    number_t age = 28;
    std::cout << age << '\n';

    return 0;
}