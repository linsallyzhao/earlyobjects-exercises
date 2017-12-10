#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "Enter the length of side a: ";
    std::cin >> a;

    std::cout << "Enter the length of side b: ";
    std::cin >> b;

    c = std::sqrt(std::pow(a, 2.0) + std::pow(b, 2.0));

    std::cout << "The length of the hypotenuse is ";
    std::cout << c << std::endl;

    return 0;
}
