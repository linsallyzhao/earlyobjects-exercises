#include "Bank.h"

Bank::Bank (double bal = 0.0, double i = 0.045) {
    balance = bal;
    iRate = i;
    interest = 0.0;
    count = 0;
}

void Bank::makeDeposit (double depo) {
    balance += depo;
    count++;
}

bool Bank::withdraw (double withdraw) {
    bool goodWithdraw = true;
    if (withdraw <= balance) {
        balance -= withdraw;
        count++;
    }else 
        goodWithdraw = false;

    return goodWithdraw;
}

void Bank::calcInterest () {
    interest = balance * iRate;
    balance += interest;
}


        
