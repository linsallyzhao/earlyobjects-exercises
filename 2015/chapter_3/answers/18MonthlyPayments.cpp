#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double loanAmount, irMonthly, numPayment, monthlyPay, totalPayBack, interestPaid, ir;

    std::cout << "Please enter your loan amount. \n";
    std::cin >> loanAmount;
    std::cout << "Please enter your monthly interest rate. \n";
    std::cin >> irMonthly;
    ir = irMonthly / 100;
    std::cout << "Please enter your number of payments. \n";
    std::cin >> numPayment;

    monthlyPay = (ir * std::pow((1 + ir), numPayment) * loanAmount) / 
               (std::pow((1 + ir), numPayment) - 1);

    totalPayBack = monthlyPay * numPayment;
    interestPaid = totalPayBack - loanAmount;

    std::cout << std::left << std::setw(30) << "Loan Amount:" << "$"
              << std::right << std::setw(10) << std::fixed << std::setprecision(2)
              << loanAmount << std::endl
              << std::left << std::setw(30) << "Monthly Interest Rate:" << " " 
              << std::right << std::setw(9) << std::fixed << std::setprecision(0)
              << irMonthly << "%" << std::endl
              << std::left << std::setw(30) << "Number of Payment:" << " " 
              << std::right << std::setw(10) << std::fixed << std::setprecision(0)
              << numPayment << std::endl
              << std::left << std::setw(30) << "Monthly Payment:" << "$" 
              << std::right << std::setw(10) << std::fixed << std::setprecision(2)
              << monthlyPay << std::endl
              << std::left << std::setw(30) << "Amount Paid Back:" << "$" 
              << std::right << std::setw(10) << std::fixed << std::setprecision(2)
              << totalPayBack << std::endl
              << std::left << std::setw(30) << "Interest Paid:" << "$" 
              << std::right << std::setw(10) << std::fixed << std::setprecision(2)
              << interestPaid << std::endl;

    return 0;
}








