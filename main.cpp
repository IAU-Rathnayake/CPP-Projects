#include <iostream>
#include <cmath>   
#include <string>

auto& print = std::cout;
auto& input = std::cin;
using string = std::string;

int main()
{
    double a; 
    double b; 
    double c; 

    print << "Enter side A: ";
    input >> a;
    print << "Enter side B: ";
    input >> b;

    c = sqrt(pow(a,2)+pow(b,2));
    print << "Hyp: " << c;

   return 0;
}