#include <iostream>
#include <iomanip>

int square(int);
double square(double);

int main()
{
    int userInt;
    double userReal;

    std::cout << "Enter an integer and a floating-point value: \n";
    std::cin >> userInt >> userReal;

    std::cout << "Here are their squares: ";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << square(userInt) << " and " << square(userReal) << std::endl;
    return 0;
}

int square(int number)
{
    return number * number;
}

double square(double number)
{
    return number * number;
}


