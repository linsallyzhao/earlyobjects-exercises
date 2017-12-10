#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int days;
    double pay = 1, total = 0;

    std::cout << "How many day did your work in the month?\n";
    std::cin >> days;

    while ((days < 1) || (days > 31))
    {
        std::cout << "That's impossible. Reenter please\n";
        std::cin >> days;
    }

    std::cout << "Day       Pay     Total Salary\n"
              << "*********************************\n";

    for (int count = 1; count <= days; count++)
    {
        pay = std::pow(2, (count - 1)) / 100;
        total += pay;
        std::cout << std::setw(3) << count
                  << std::setw(12) << std::fixed << std::setprecision(2) << pay
                  << std::setw(12) << std::fixed << std::setprecision(2) << total
                  << std::endl;
    }
    return 0;
}

