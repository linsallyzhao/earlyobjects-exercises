#include <iostream>
#include <cmath>

int main()
{
    double volume,
           radius,
           height;

    std::cout << "This program will tell you the volumsn of \n"
              << "a cylinder-shaped fuel tank. \n";
    std::cout << "How tall is the tank? ";
    std::cin >> height;
    std::cout << "What is the radius of the tank? ";
    std::cin >> radius;

    volume = 3.14159 * std::pow(radius, 2) * height;
    std::cout << "The volums of the tank is " << volume << std::endl;

    return 0;
}
