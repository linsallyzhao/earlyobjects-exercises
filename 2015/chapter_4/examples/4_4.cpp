#include <iostream>

int main()
{
    double num1, num2, quotient;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num2 != 0)
    {
        quotient = num1 / num2;
        std::cout << "The quotient of " << num1 << " divided by "
                  << num2 << " is " << quotient << ". \n";
    }

    else
    {
        std::cout << "Division by zero is not possible. \n"
                  << "Please run the program again and enter \n"
                  << "a number other than zero. \n";
    }

    return 0;
}
