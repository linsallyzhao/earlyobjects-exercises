#include <iostream>
#include <iomanip>
#include "Circle.h"

const int NUM_CIRCLES = 4;

int main()
{
    Circle circle[NUM_CIRCLES];

    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        double r;
        std::cout << "Enter the radius for circle " << (index + 1) << ": \n";
        std::cin >> r;
        circle[index].setRadius(r);
    }

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nHere are the areas of the " << NUM_CIRCLES
              << " circles. \n";
    for (int index = 0; index < NUM_CIRCLES; index++)
    {
        std::cout << "circle " << (index + 1) << std::setw(8)
                  << circle[index].findArea() << std::endl;
    }

    return 0;
}
