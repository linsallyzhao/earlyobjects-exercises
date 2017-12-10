#include <iostream>

int main()
{
    int length, width, area;

    std::cout << "This program calculates the area of a rectangle. \n";

    std::cout << "Enter the length and width of the ractangle ";
    std::cout << "separated by a space. \n";

    std::cin >> length >> width;
    area = length * width;
    std::cout << "The area of the ractangle is " << area << std::endl;

    return 0;
}
