#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double principal, iRate, timeCompounded, interest, finalBalance, ir;

    std::cout << "Please enter your principal. \n";
    std::cin >> principal;
    std::cout << "Please enter the annual interest rate. \n";
    std::cin >> iRate;
    std::cout << "How many times is the interests compounded each year? \n";
    std::cin >> timeCompounded;

    ir = iRate / 100;
    finalBalance = principal * std::pow((1 + ir / timeCompounded), timeCompounded);
    interest = finalBalance - principal;

    std::cout << std::setw(20) << std::left << "Interest Rate: "
              << std::right << std::fixed << std::setprecision(2)
              << std::setw(8) << iRate << "%\n"
              << std::setw(20) << std::left << "Times Compounded: "
              << std::right << std::fixed << std::setprecision(0)
              << std::setw(8) << timeCompounded << std::endl
              << std::setw(20) << std::left << "Principal: " << "$"
              << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << principal << std::endl
              << std::setw(20) << std::left << "Interest: " << "$"
              << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << interest << std::endl
              << std::setw(20) << std::left << "Final balance: " << "$"
              << std::right << std::fixed << std::setprecision(2)
              << std::setw(7) << finalBalance << std::endl;

    return 0;
}





