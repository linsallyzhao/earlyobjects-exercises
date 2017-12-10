#include <iostream>

int factorial(int);

int main()
{
    int number;

    std::cout << "Enter an integer value and I will display\n";
    std::cout << "its factorial: ";

    std::cin >> number;
    std::cout << "The factorial of " << number << " is "
              << factorial(number) << std::endl;

    return 0;
}

int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

