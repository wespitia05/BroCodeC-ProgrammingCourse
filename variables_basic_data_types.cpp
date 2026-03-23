#include <iostream>

int main() {

    // integer (whole number)
    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n'; // display
    std::cout << y << '\n'; // display
    std::cout << sum << '\n'; // display

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n'; // display
    std::cout << gpa << '\n'; // display
    std::cout << temperature << '\n'; // display

    // single character
    char grade = 'A';
    char initial = 'B';

    std::cout << grade << '\n'; // display
    std::cout << initial << '\n'; // display

    // boolean (true or false)
    bool isStudent = true;
    bool isAdult = false;

    std::cout << isStudent << '\n'; // display
    std::cout << isAdult << '\n'; // display

    // string (objects that represents a sequence of text)
    std::string name = "william";
    std::string day = "friday";
    std::string food = "pizza";
    std::string address = "123 fake st.";

    std::cout << "hello " << name << '\n';
    std::cout << "today is " << day << '\n';
    std::cout << "i like " << food << '\n';
    std::cout << "i live at " << address << '\n';

    return 0;
}