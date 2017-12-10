#include <iostream>
#include <iomanip>

int main()
{
    std::string mon, year, divid;
    float totalCash,
          sale,
          stateTax,
          countyTax,
          totalTax;
    int numDivid;

    std::cout << "What mon and year is this? ";
    std::cin >> mon >> year;
    std::cin.ignore(50, '\n');
    std::cout << "How much did you colledt this month? ";
    std::cin >> totalCash;

    sale = totalCash / 1.06;
    stateTax = sale * 0.04;
    countyTax = sale * 0.02;
    totalTax = sale * 0.06;
    numDivid = mon.length() + year.length() + 10;
    divid.assign(numDivid, '-');

    std::cout << "Month: " << mon << " " << year << std::endl
              << divid << std::endl
              << std::setw(20) << std::left << "Total Collected: " 
              << "$" << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << totalCash << std::endl
              << std::setw(20) << std::left << "sales: " 
              << "$" << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << sale << std::endl
              << std::setw(20) << std::left << "County Sales Tax: " 
              << "$" << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << countyTax << std::endl
              << std::setw(20) << std::left << "State Sales Tax: " 
              << "$" << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << stateTax << std::endl
              << std::setw(20) << std::left << "Total Sales Tax: " 
              << "$" << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << totalTax << std::endl;

    return 0;
}







