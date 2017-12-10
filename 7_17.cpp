#include <iostream>
#include <iomanip>
#include "Bank.cpp"

using namespace std;

void displayMenu();
char getChoice(char);
void makeDeposit (Bank &);
void withdraw (Bank &);

int main() {
    const char MAX_CHOICE = '7';
    Bank savings;
    char choice;

    cout << fixed << showpoint << setprecision(2);

    do {
        displayMenu();
        choice = getChoice(MAX_CHOICE);
        switch (choice) {
            case '1': cout << "The current balance is $";
                      cout << savings.getBalance() << endl;
                      break;
            case '2': cout << "There have been ";
                      cout << savings.getCount() << " transactions.\n";
                      break;
            case '3': cout << "Interest earned for this period: $";
                      cout << savings.getInterest() << endl;
                      break;
            case '4': makeDeposit(savings);
                      break;
            case '5': withdraw(savings);
                      break;
            case '6': savings.calcInterest();
                      cout << "Interest added.\n";
        }
    } while(choice != '7');

    return 0;
}

void displayMenu() {
    cout << "\n\n               MENU\n\n";
    cout << "1) Display the account balance\n";
    cout << "2) Display the number of transactions\n";
    cout << "3) Display interest earned for this period\n";
    cout << "4) Make a deposit\n";
    cout << "5) Make a withdraw\n";
    cout << "6) Add interest for this period\n";
    cout << "7) Exit the program\n\n";
    cout << "Enter our choice: ";
}


char getChoice(char max) {
    char choice = cin.get();
    cin.ignore();
    while (choice < '1' || choice > max) {
        cout << "Choice must be between 1 and " << max << ". \n";
        cout << "Please enter again: ";
        choice = cin.get();
        cin.ignore();
    }
    return choice;
}

void makeDeposit(Bank &account) {
    double depo;
    cout << "Enter the amount of deposit: ";
    cin >> depo;
    cin.ignore();
    account.makeDeposit(depo);
}

void withdraw(Bank &account) {
    double withdraw;
    cout << "Enter the amount of the withdraw: ";
    cin >> withdraw;
    cin.ignore();
    if (!account.withdraw(withdraw)) 
        cout << "Error: Withdraw amount too large.\n\n";
}

