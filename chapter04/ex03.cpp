#include <iostream>

double numberInput() {
    double x;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}

int main() {
    double firstNumber = numberInput();
    double secondNumber = numberInput();
    double answer;
    std::string mathSymbol;

    std::cout << "Please enter a math symbol (+, -, *, /): ";
    std::cin >> mathSymbol;     

    
    if (mathSymbol == "+") {
        answer = firstNumber + secondNumber;
    }
    else if (mathSymbol == "-") {
        answer = firstNumber - secondNumber;
    }
    else if (mathSymbol == "*") {
        answer = firstNumber * secondNumber;
    }
    else if (mathSymbol == "/") {
        answer = firstNumber / secondNumber;
    }
    else {
        std::cout << "invalid";
        return 0;
    }

    std::cout << firstNumber << mathSymbol << secondNumber << "=" << answer;
}