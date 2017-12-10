#include <iostream>
#include "Rectangle.h"

int main()
{
    Rectangle box;
    double boxLength, boxWidth;

    std::cout << "This program will calculate the area of a rectangle.\n";
    std::cout << "What is the length? ";
    std::cin >> boxLength;

    std::cout << "What is the width? ";
    std::cin >> boxWidth;

    if (!box.setLength(boxLength))
        std::cout << "Invalid box length entered. \n";
    else if (!box.setWidth(boxWidth))
        std::cout << "Invalid box width entered.\n";
    else
    {
        std::cout << "\nHere is the rectangle's data:\n"
                  << "Length : " << box.getLength() << std::endl
                  << "Width  : " << box.getWidth() << std::endl
                  << "Area   : " << box.getArea() << std::endl;
    }
    return 0;
}
