#include <iostream>

int main()
{
    int whole;
    double fractional;
    char letter;

    std::cout << "Enter an integer, a double, and a chareacter: ";
    std::cin >> whole >> fractional >> letter;

    std::cout << "whole: " << whole << std::endl;
    std::cout << "fractional: " << fractional << std::endl;
    std::cout << "letter: " << letter << std::endl;

    return 0;

}
