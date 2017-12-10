#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double loan,
           rate,
           moInterestRate,
           years,
           balance,
           term,
           payment;

    int numPayments;

    std::cout << "Loan amount: $";
    std::cin >> loan;

    std::cout << "Annual interest rate (entered as a decimal): ";
    std::cin >> rate;
    std::cout << "Years of loan: ";
    std::cin >> years;

    numPayments = static_cast<int>(12 * years);
    moInterestRate = rate / 12.0;
    term = std::pow((1 + moInterestRate), numPayments);
    payment = (loan * moInterestRate * term) / (term - 1.0);

    std::cout << std::fixed << std::showpoint << std::setprecision(2)
              << "Monthly payment: $" << payment << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(5) << "Month" << std::setw(10) << "Interest"
              << std::setw(10) << "Principal" << std::setw(9) << "Balance" << std::endl;

    balance = loan;

    for (int month = 1; month <= numPayments; month++)
    {
        double moInterest,
               principal;

        moInterest = moInterestRate * balance;
        if (month != numPayments)
            principal = payment - moInterest;
        else
        {
            principal = balance;
            payment = balance + moInterest;
        }
        balance -= principal;

        std::cout << std::setw(4) << month << std::setw(10) << moInterest;
        std::cout << std::setw(10) << principal << std::setw(10) << balance << std::endl;
    }
    return 0;
}

