#include <iostream>

int main()
{
    const double DIDUCT = 5000;
    double propertyValue,
           taxRate,
           annualTax,
           quarterTax;

    std::cout << "What is the value of your property? ";
    std::cin >> propertyValue;
    std::cout << "What is the current tax rate? ";
    std::cin >> taxRate;

    annualTax = (propertyValue * 0.6 - DIDUCT) * taxRate;
    quarterTax = annualTax /4;

    std::cout << "Your annual tax payment is " << annualTax << " dollars.\n";
    std::cout << "Your quarter tax payment is " << quarterTax << " dollars. \n";

    return 0;
}

