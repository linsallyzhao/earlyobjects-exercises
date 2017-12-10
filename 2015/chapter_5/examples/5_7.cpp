#include <iostream>
#include <iomanip>

int main()
{
    int num,
        lastNum;

    std::cout << "This program will display a table of integer\n"
              << "numbers and their squares, starting with 1. \n"
              << "What should the last number be?\n"
              << "Enter an integer between 2 and 10: ";
    std::cin >> lastNum;

    while ((lastNum < 2) || (lastNum > 10))
    {
        std::cout << "Please enter an integer between 2 and 10: ";
        std::cin >> lastNum;
    }
    std::cout << "\nNumber  Square\n";
    std::cout << "---------------\n";
    num = 1;
    while (num <= lastNum)
    {
        std::cout << std::setw(4) << num << std::setw(7) << (num * num) << std::endl;
        num++;
    }
    return 0;
}
