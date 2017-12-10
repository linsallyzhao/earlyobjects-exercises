#include <iostream>
#include <iomanip>

union PaySource
{
    short hours;
    float sales;
};

int main()
{
    const double COMMISSION_PCT = 0.1;

    PaySource employee1;

    char hourlyType;
    float payRate, grossPay;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "This program calculates either hourly wages or "
              << "sales commission. \n";
    std::cout << "Is this an hourly employee (y or n) ?\n";
    std::cin >> hourlyType;

    if (hourlyType == 'y' || hourlyType == 'Y')
    {
        std::cout << "What is the hourly pay rate?\n";
        std::cin >> payRate;
        std::cout << "How many hours were worked? \n";
        std::cin >> employee1.hours;
        grossPay = employee1.hours * payRate;
        std::cout << "Gross pay: $" << grossPay << std::endl;
    }
    else
    {
        std::cout << "What are the total sales for this employee?\n";
        std::cin >> employee1.sales;
        grossPay = employee1.sales * COMMISSION_PCT;
        std::cout << "Gross pay: $" << grossPay << std::endl;
    }
    return 0;
}
