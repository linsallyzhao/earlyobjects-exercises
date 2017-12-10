#include <iostream>
#include <cmath>

#define PI 3.14159

int main()
{
    float diameter, area, price, unit_earn;


    diameter = 12;
    price = 12;
    area = std::pow(diameter / 2, 2.0) * PI;
    unit_earn = price / area;

    std::cout << "For a " << diameter << " inch pizza, each square inch earns "
              << unit_earn << " dollars. ";

    diameter = 14;
    price = 14;
    area = std::pow(diameter / 2, 2.0) * PI;
    unit_earn = price / area;

    std::cout << "For a " << diameter << " inch pizza, each square inch earns "
              << unit_earn << " dollars. ";

    return 0;
}



    
