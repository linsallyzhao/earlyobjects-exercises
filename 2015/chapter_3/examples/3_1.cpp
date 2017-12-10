#include <iostream>

int main()
{
    int length, width, area;

    std::cout << "This program calculates the area of a rectangle. \n";

    std::cout << "What is the lenth of the ractangle? ";
    std::cin >> length;

    std::cout << "What is the width of the rectangle? ";
    std::cin >> width;

    area = length * width;
    std::cout << "The area of the ractangle is " << area << std::endl;

    return 0;

}
