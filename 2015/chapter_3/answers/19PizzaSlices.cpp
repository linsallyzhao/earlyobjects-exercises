#include <iostream>

int main()
{
    int dia, slices;
    const double PI = 3.14,
                 UNIT = 14.125;
    double area;

    std::cout << "How big do you want your pizza? \n";
    std::cin >> dia;
    std::cin.ignore(100, '\n');
    
    area = PI * dia * dia / 4;
    slices = area / UNIT;

    std::cout << "Your pizza will have " << slices << " slices. \n";

    return 0;
}
