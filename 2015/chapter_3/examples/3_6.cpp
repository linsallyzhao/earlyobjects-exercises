#include <iostream>
#include <cmath>

int main()
{
    double area, radius;

    std::cout << "This program calculates the area fo a circle. \n";

    std::cout << "What is the radius of the circle? ";
    std::cin >> radius;

    area = 3.14159 * std::pow(radius, 2);
    std::cout << "The area is " << area << std::endl;

    return 0;
}
