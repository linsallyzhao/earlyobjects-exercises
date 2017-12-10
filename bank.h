#ifndef BANK_H
#define BANK_H

class Bank {
private: 
    double balance;
    int count;
    double iRate;
    double interest;

public:
    Bank (double bal = 0.0, double i = 0.045);
    void makeDeposit (double depo);
    bool withdraw (double withdraw);
    void calcInterest();
    
    double getInterest () {
        return interest;
    }
    double getBalance () {
        return balance;
    }
    int getCount () {
        return count;
    }
};
#endif
