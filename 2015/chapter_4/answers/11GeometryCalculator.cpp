#include <iostream>

int main()
{
    double area;
    int choice;

    std::cout << "Geometry Calculator" << std::endl
              << "1. Calculate the Area of a Circle \n"
              << "2. Calculate the Area of a Rectangle\n"
              << "3. Calculate the Area of a Triangle\n"
              << "4. Quit \n";
    std::cout << "Please enter your choice (1-4):\n";
    std::cin >> choice;

    if ((choice < 0) || (choice > 4))
        std::cout << "That's not cool.\n";
    else 
    {
        switch (choice)
        {
            case 1: double radiu;
                    std::cout << "Please enter the radiu. \n";
                    std::cin >> radiu;
                    if (radiu > 0)
                    {
                        area = 3.14159 * radiu * radiu;
                        std::cout << "The area of the circle is " << area << std::endl;
                    }
                    else
                        std::cout << "Invalid input. \n";
                    break;
            case 2: double length, width;
                    std::cout << "Please enter the length and width. \n";
                    std::cin >> length >> width;
                    if ((length > 0) && (width > 0))
                    {
                        area = length * width;
                        std::cout << "The area of the ractangle is " << area << std::endl;
                    }
                    else
                        std::cout << "Invalid input. \n";
                    break;
            case 3: double base, height;
                    std::cout << "Please enter the base and height of triangle. \n";
                    std::cin >> base >> height;
                    if ((base > 0) && (height > 0))
                    {
                        area = 0.5 * base * height;
                        std::cout << "The area of the triangle is " << area << std::endl;
                    }
                    else
                        std::cout << "Invalid input. \n";
                    break;
        }
    }
    return 0;
}


