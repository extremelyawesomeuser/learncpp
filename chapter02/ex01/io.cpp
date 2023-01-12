#include "io.h"
#include <iostream>

int readNumber() {
    int number = 0;
    std::cout << "Please enter a number to add: ";
    std::cin >> number;
    return number; 
}

void writeAnswer(int answer) {
    std::cout << "The answer is " << answer;
}