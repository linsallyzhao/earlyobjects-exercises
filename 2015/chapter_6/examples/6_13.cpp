#include <iostream>

bool isEven(int);

int main()
{
    int val;

    std::cout << "Enter an integer and I will tell you \n"
              << "if it si even or odd: ";
    std::cin >> val;

    if (isEven(val))
        std::cout << val << " is even. \n";
    else
        std::cout << val << " is odd. \n";
    return 0;
}

bool isEven(int number)
{
    if (number % 2 == 0)
        return true;
    else
        return false;
}

