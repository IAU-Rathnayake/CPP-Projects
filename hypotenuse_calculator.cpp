#include <iostream>
#include <cmath> 
#include <string>


using std::cout;
using std::cin;
using std::string;

int main()
{
    // 1. Initialization
    // Giving variables 
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // 2. User Input
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    // 3. Calculation
    c = sqrt(pow(a, 2) + pow(b, 2));

    // 4. Output
    cout << "Hypotenuse: " << c << "\n";

    return 0;
}