#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string month1 = "January",
                month2 = "February",
                month3 = "March";
    
    int days1 = 31,
        days2 = 28,
        days3 = 31;

    double high1 = 22.6,
           high2 = 37.4,
           high3 = 53.9;

    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Month       Days     High\n";

    std::cout << std::left << std::setw(12) << month1
              << std::right << std::setw(4) << days1 << std::setw(9)
              << high1 << std::endl;
    std::cout << std::left << std::setw(12) << month2
              << std::right << std::setw(4) << days2 << std::setw(9)
              << high2 << std::endl;
    std::cout << std::left << std::setw(12) << month3
              << std::right << std::setw(4) << days3 << std::setw(9)
              << high3 << std::endl;

    return 0;
}
