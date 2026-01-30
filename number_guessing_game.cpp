#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int secretNumber, userGuess;
    int attempts = 0;
    
    // Initialize random seed
    std::srand(std::time(nullptr));
    secretNumber = (std::rand() % 10) + 1;
    
    // Display game title
    std::cout << "********** Number Guessing Game **********\n";
    std::cout << "Guess a number between 1 and 10\n\n";
    
    // Game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;
        
        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n\n";
        } else {
            std::cout << "\nCongratulations! You found it: " << secretNumber << "\n";
            std::cout << "It took you " << attempts << " attempt(s).\n";
        }
        
    } while (userGuess != secretNumber);
    
    std::cout << "******************************************\n";
    
    return 0;
}