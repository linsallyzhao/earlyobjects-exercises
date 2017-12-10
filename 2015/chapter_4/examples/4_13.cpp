#include <iostream>

int main()
{
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;

    double income;
    int years;

    std::cout << "What is your annual income? ";
    std::cin >> income;
    std::cout << "How many years have you worked at your current job? ";
    std::cin >> years;

    if (income >= MIN_INCOME || years > MIN_YEARS)
        std::cout << "You qualify for a loan. \n";
    else
    {
        std::cout << "\nYou must earn at least $" << MIN_INCOME
                  << " or have been employed \n"
                  << "for more than " << MIN_YEARS << " years "
                  << "to qualify for a loan. \n";
    }
    return 0;
}
