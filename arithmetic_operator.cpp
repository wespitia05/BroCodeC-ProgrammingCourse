#include <iostream>

int main() {
    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    int students = 20;

    // students = students + 1;
    // students += 1; // does the same thing
    // students++; // does the same thing

    // students = students - 1;
    // students -= 1; // does the same thing
    // students--; // does the same thing

    // students = students * 2;
    // students *= 2; // same thing

    // students = students / 2;
    // students /= 2;

    // returns remainder from 20/3 = 2, if % 2 then it is 0
    int remainder = students % 3;

    std::cout << students << '\n';
    std::cout << remainder << '\n';

    return 0;
}