#include <iostream>
#include <string>

double divide(double, double);

int main()
{
    int num1, num2;
    double quotient;

    std::cout << "Enter two numbers: \n";
    std::cin >> num1 >> num2;
    try
    {
        quotient = divide(num1, num2);
        std::cout << "The quotient is " << quotient << std::endl;
    }
    catch (std::string exceptionString)
    {
        std::cout << exceptionString;
    }
    std::cout << "End of the program.\n";

    return 0;
}

double divide (double numerator, double denominator)
{
    if (denominator == 0)
        throw std::string("ERROR: Cannot divide by zero.\n");
    else
        return numerator / denominator;
}
