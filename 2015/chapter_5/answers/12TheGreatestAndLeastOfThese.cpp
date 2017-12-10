#include <iostream>

int main()
{
    int max, min, newcome;

    std::cout << "Please enter some integers, I will tell your the min and max. \n"
              << "Enter -99 if you want to end. \n";
    std::cin >> newcome;
    std::cin.ignore(50, '\n');
    max = newcome;
    min = newcome;

    while (newcome != -99)
    {
       if (newcome > max)
           max = newcome;
       if (newcome < min)
           min = newcome;
       std::cin >> newcome;
       std::cin.ignore(50, '\n');
    }
    std::cout << "The max of this group of numbers is " << max << std::endl;
    std::cout << "The min of this group of numbers is " << min << std::endl;
    return 0;
}
