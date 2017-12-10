#include <iostream>
#include <cmath>

#define PI 3.14159

int main()
{
    double area, radius;

    std::cout << "This program calculates the area of a circle. \n";

    std::cout << "What is the radius of the circle? ";
    std::cin >> radius;

    area = PI * std::pow(radius, 2);
    std::cout << "The area is " << area << std::endl;

    return 0;
}
