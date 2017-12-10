#include <iostream>
#include <iomanip>
#include "Account.h"

void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    const char MAX_CHOICE = '7';
    Account savings;
    char choice;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    do
    {
        displayMenu();
        choice = getChoice(MAX_CHOICE);
        switch(choice)
        {
            case '1': std::cout << "The current balance is $";
                      std::cout << savings.getBalance() << std::endl;
                      break;
            case '2': std::cout << "There have been "
                                << savings.getTransactions()
                                << " transactions.\n";
                      break;
            case '3': std::cout << "Interest earned for thsi perid: $"
                                << savings.getInterest() << std::endl;
                      break;
            case '4': makeDeposit(savings);
                      break;
            case '5': withdraw(savings);
                      break;
            case '6': savings.calcInterest();
                      std::cout << "Interest added. \n";
        }
    }while(choice != '7');
    return 0;
}

void displayMenu()
{
    std::cout << "\n\n          MENU\n\n"
              << "1) Display the account balance\n"
              << "2) Display the number of transactions\n"
              << "3) Display interest earned for thsi period\n"
              << "4) Make a deposit\n"
              << "5) Make a withdraw\n"
              << "6) Add interest for this period\n"
              << "7) Exit the program\n\n"
              << "Enter your choice: ";
}

char getChoice(char max)
{
    char choice = std::cin.get();

    std::cin.ignore();

    while (choice < '1' || choice > max)
    {
        std::cout << "Choice must be between 1 and " << max << ". \n"
                  << "Please re-enter choice: ";
        choice = std::cin.get();
        std::cin.ignore();
    }
    return choice;
}

void makeDeposit(Account &account)
{
    double dollars;

    std::cout << "Enter the amount of deposit: ";
    std::cin >> dollars;
    std::cin.ignore();
    account.makeDeposit(dollars);
}

void withdraw(Account &account)
{
    double dollars;

    std::cout << "Enter the amount of the withdrawal: ";
    std::cin >> dollars;
    std::cin.ignore();
    if (!account.withdraw(dollars))
        std::cout << "ERROR: Withdrawal amount too large. \n\n";
}
