#include <iostream>
#include <cmath>

class Circle
{
    private:
        double radius;

    public:
        void setRadius(double r)
        {   radius = r; }

        double getArea()
        {
            return 3.14 * std::pow(radius, 2);
        }

};

int main()
{
    Circle circle1,
           circle2;

    circle1.setRadius(1);
    circle2.setRadius(2.5);

    std::cout << "The area of circle 1 is " << circle1.getArea() << std::endl;
    std::cout << "The area of circle 2 is " << circle2.getArea() << std::endl;

    return 0;
}


