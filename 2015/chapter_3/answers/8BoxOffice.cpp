#include <iostream>
#include <iomanip>

int main()
{
    int adultNum, childNum;
    float adultPrice, childPrice, grossPro, netPro, paidOut;
    const float RATE = 0.2;

    std::cout << "Please enter the number of adult tickets sold and \n"
              << "the number of child tickets sold. \n";
    std::cin >> adultNum >> childNum;

    adultPrice = 6;
    childPrice = 3;
    grossPro = adultPrice * adultNum + childPrice * childNum;
    netPro = grossPro * RATE;
    paidOut = grossPro - netPro;

    std::cout << std::left << std::setw(30) << "Movie Name: "
              << std::setw(20) << "\"Wheels of Fury\"" << std::endl
              << std::setw(30) << "Adult Tickets Sold: "
              << "  " << std::setw(18) << adultNum << std::endl
              << std::setw(30) << "Child Tickets Sold: "
              << "  " << std::setw(18) << childNum << std::endl
              << std::setw(30) << "Gross Box Office Profit: "
              << "  $" << std::right << std::setw(8) <<std::fixed 
              << std::setprecision(2) << grossPro << std::endl
              << std::left << std::setw(30) << "Amount Paid to Distributor: "
              << " -$" << std::right << std::setw(8) << std::fixed 
              << std::setprecision(2) << paidOut << std::endl
              << std::left << std::setw(30) << "Net Box Office Profit: "
              << "  $" << std::right << std::setw(8) << std::fixed 
              << std::setprecision(2) << netPro << std::endl;

    return 0;
}

