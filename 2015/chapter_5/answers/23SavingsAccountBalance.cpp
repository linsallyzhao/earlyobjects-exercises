#include <iostream>
#include <iomanip>

int main()
{
    double balance,
           startBalance,
           totalDeposit = 0,
           totalWithdrawal = 0,
           totalInterest = 0,
           annualIn,
           monthIn;

    std::cout << "Please enter your starting balance and annual interst rate\n";
    std::cin >> balance >> annualIn;
    startBalance = balance;
    monthIn = annualIn / 12;

    for (int month = 1; month <= 3; month++)
    {
        double start;
        start = balance;
        double deposit;
        std::cout << "Please enter your total deposit for month " << month << std::endl;
        std::cin >> deposit;
        while (deposit < 0)
        {
            std::cout << "Invalid input. Try again. \n";
            std::cin >> deposit;
        }
        balance += deposit;
        totalDeposit += deposit;

        double withdrawal;
        std::cout << "Please enter your total withdrawal for month " << month << std::endl;
        std::cin >> withdrawal;
        while ((withdrawal < 0) || (withdrawal > balance))
        {
            std::cout << "Invalid input. Try again. \n";
            std::cin >> withdrawal;
        }
        balance -= withdrawal;
        totalWithdrawal += withdrawal;

        double interest;
        interest = (start + balance ) /2 * monthIn;
        totalInterest += interest;
        balance += interest;
    }
    std::cout << "Summary for three month\n";
    std::cout << "_________________________________\n";
    std::cout << std::left << std::setw(20) << "Start balance:" << "$"
              << std::right << std::setw(8) << std::fixed << std::setprecision(2)
              << startBalance << std::endl;
    std::cout << std::left << std::setw(20) << "Total Deposit:" << "$"
              << std::right << std::setw(8) << std::fixed << std::setprecision(2)
              << totalDeposit << std::endl;
    std::cout << std::left << std::setw(20) << "Total Withdrawal:" << "$"
              << std::right << std::setw(8) << std::fixed << std::setprecision(2)
              << totalWithdrawal << std::endl;
    std::cout << std::left << std::setw(20) << "Total Interest:" << "$"
              << std::right << std::setw(8) << std::fixed << std::setprecision(2)
              << totalInterest << std::endl;
    std::cout << std::left << std::setw(20) << "Final Balance:" << "$"
              << std::right << std::setw(8) << std::fixed << std::setprecision(2)
              << balance << std::endl;
    return 0;
}




