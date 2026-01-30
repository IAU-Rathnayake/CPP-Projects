#include <iostream>
#include <cmath>

int main() {
    double sideA, sideB, hypotenuse;

    // Get input from user
    std::cout << "Enter side A: ";
    std::cin >> sideA;

    std::cout << "Enter side B: ";
    std::cin >> sideB;

    // Validate input
    if (sideA <= 0 || sideB <= 0) {
        std::cout << "Error: Sides must be positive numbers!\n";
        return 1;
    }

    // Calculate hypotenuse using Pythagorean theorem
    hypotenuse = std::sqrt(sideA * sideA + sideB * sideB);

    // Display result
    std::cout << "Hypotenuse: " << hypotenuse << "\n";

    return 0;
}