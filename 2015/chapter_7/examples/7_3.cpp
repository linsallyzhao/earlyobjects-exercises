#include <iostream>

class Rectangle
{
    private :
        double length;
        double width;

    public :
        void setLength(double);
        void setWidth(double);
        double getLength();
        double getWidth();
        double getArea();

};

void Rectangle::setLength(double len)
{
    if (len >= 0.0)
        length = len;
    else
    {
        length = 1.0;
        std::cout << "Invalid length. Using a default value of 1.0\n";
    }
}

void Rectangle::setWidth(double w)
{
    if (w >= 0.0)
        width = w;
    else
    {
        width = 1.0;
        std::cout << "Invalid width. Using a default value of 1.0\n";
    }
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    return length * width;
}

int main()
{
    Rectangle box;
    double boxLength, boxWidth;

    std::cout << "This program will calculate the area of a rectangle.\n";
    std::cout << "What is the length?\n";
    std::cin >> boxLength;
    std::cout << "What is the width? \n";
    std::cin >> boxWidth;

    box.setLength(boxLength);
    box.setWidth(boxWidth);

    std::cout << "\nHere is the rectangle's data:\n"
              << "Length: " << box.getLength() << std::endl
              << "Width : " << box.getWidth() << std::endl
              << "Area  : " << box.getArea() << std::endl;

    return 0;
}
