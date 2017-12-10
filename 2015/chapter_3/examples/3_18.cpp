#include <iostream>
#include <iomanip>

int main()
{
    double day1,
           day2,
           day3,
           total;

    std::cout << "Enter the sales for day 1: \n";
    std::cin >> day1;
    std::cout << "Enter the sales for day 2: \n";
    std::cin >> day2;
    std::cout << "Enter the sales for day 3: \n";
    std::cin >> day3;

    total = day1 + day2 + day3;

    std::cout << "\nSales Figures\n"
              << "-----------------\n"
              << std::fixed << std::setprecision(2);
    std::cout << "Day 1: " << std::setw(8) << day1 << std::endl;
    std::cout << "Day 2: " << std::setw(8) << day2 << std::endl;
    std::cout << "Day 3: " << std::setw(8) << day3 << std::endl;
    std::cout << "Total: " << std::setw(8) << total << std::endl;

    return 0;
}

    
