#include <iostream>
#include <iomanip>

int main()
{
    int numDays;
    double dailySales,
           totalSales = 0.0,
           averageSales;

    std::cout << "For how many days do you have sales figures?";
    std::cin >> numDays;

    for (int day = 1; day <= numDays; day++)
    {
        std::cout << "Enter the sales for day " << day << ": ";
        std::cin >> dailySales;
        totalSales += dailySales;
    }

    averageSales = totalSales / numDays;

    std::cout << std::fixed << std::showpoint << std::setprecision(2)
              << "\nTotal sales:         $" << std::setw(8) << totalSales
              << "\nAverage daily sales: $" << std::setw(8) << averageSales
              <<std::endl;
    return 0;
}
