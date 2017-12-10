#include <iostream>
#include "Length.h"

int main()
{
    Length first(0), second(0), third(0);
    int f, i;
    std::cout << "Enter a distance in feet and inches: ";
    std::cin >> f >> i;
    first.setLength(f, i);
    std::cout << "Enter another distance in feet and inches: ";
    std::cin >> f >> i;
    second.setLength(f, i);

    third = first + second;
    std::cout << "first + second = "
              << third.getFeet() << " feet, "
              << third.getInches() << " inches.\n";

    third = first - second;
    std::cout << "first - second = "
              << third.getFeet() << " feet, "
              << third.getInches() << " inches.\n";
    std::cout << "first == second = ";
    if (first == second) 
        std::cout << "true";
    else
        std::cout << "false";
    std::cout << std::endl;
    std::cout << "first < secod = ";
    if (first < second)
        std::cout << "true";
    else
        std::cout << "false";
    std::cout << std::endl;

    return 0;
}
