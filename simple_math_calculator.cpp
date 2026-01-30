#include <iostream>
#include <limits>

int main() {
    char operation;
    double firstNumber, secondNumber, result = 0.0;
    bool validOperation = true;
    
    // Get operator from user
    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> operation;
    
    // Get numbers from user
    std::cout << "Enter first number: ";
    std::cin >> firstNumber;
    
    std::cout << "Enter second number: ";
    std::cin >> secondNumber;
    
    // Perform calculation based on operator
    switch (operation) {
        case '+':
            result = firstNumber + secondNumber;
            break;
            
        case '-':
            result = firstNumber - secondNumber;
            break;
            
        case '*':
            result = firstNumber * secondNumber;
            break;
            
        case '/':
            if (secondNumber != 0.0) {
                result = firstNumber / secondNumber;
            } else {
                std::cout << "Error: Division by zero is not allowed!\n";
                validOperation = false;
            }
            break;
            
        default:
            std::cout << "Error: Invalid operator entered!\n";
            validOperation = false;
            break;
    }
    
    // Display result if operation was valid
    if (validOperation) {
        std::cout << "Answer: " << result << "\n";
    }
    
    return 0;
}