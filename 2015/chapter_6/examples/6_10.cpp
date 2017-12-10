#include <iostream>

void divide(double arg1, double arg2);

int main()
{
    double num1, num2;

    std::cout << "Enter two numbers and I will fivide the first \n"
              << "number by the second number: ";
    std::cin >> num1 >> num2;
    divide(num1, num2);
    return 0;
}

void divide(double arg1, double arg2)
{
    if (arg2 == 0)
    {
        std::cout << "Sorry, I cannot divide by zero. \n";
        return;
    }

    std::cout << "The quotient is " << (arg1 / arg2) << std::endl;
}
