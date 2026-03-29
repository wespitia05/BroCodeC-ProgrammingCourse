#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    // namespace = provides a solution for preventing name conflicts
    //             in large projects. each entity needs a unique name.
    //             a namespace allows for identically names entities as 
    //             long as the namespaces are different

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    return 0;
}