#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    double balance, rate, monRate, depo, 
           totalDe = 0.0, withdraw, totalWi = 0.0,
           monIn = 0.0, totalIn = 0.0;
    string fileName;

    cout << "What is your starting balance?\n";
    cin >> balance;
    while (balance < 0) {
        cout << "Balance cannot be negative. Try again please!\n";
        cin >> balance;
    }
    cout << "What is the annual rate?\n";
    cin >> rate;
    while (rate < 0) {
        cout << "Interest rate cannot be nagetive.Try again\n";
        cin >> rate;
    }

    ofstream outputFile;
    cout << "Where do you want to save this?\n";
    cin >> fileName;
    outputFile.open(fileName.c_str());
    outputFile << "Starting balance is $" << balance << endl;
    outputFile << "Annual interest rate is " << rate << endl;
    outputFile << fixed << showpoint << setprecision(2);
    outputFile << "begin_balence   deposite  withdraw  end_balance  interest_earned\n";
    monRate = rate / 12;

    for (int month = 1; month <= 3; month++) {
        double endBa;
        cout << "How much did you deposit in month " << month << "?\n";
        cin >> depo;
        while (depo < 0) {
            cout << "Deposite cannot be negative. Try again\n";
            cin >> depo;
        }
        totalDe += depo;
        cout << "How much did you withdraw in month " << month << "?\n";
        cin >> withdraw;
        while (withdraw < 0 || withdraw > (balance + depo)) {
            cout << "You did not have that much in your account.\n";
            cout << "Try again you dirty lier!\n";
            cin >> withdraw;
        }
        totalWi += withdraw;
        endBa = balance + depo - withdraw;
        monIn = monRate * (balance + endBa) / 2;
        totalIn += monIn;
        outputFile << setw(11) << balance << setw(11) << depo << setw(10)
                   << withdraw << setw(13) << endBa << setw(11) << monIn << endl;
        balance = endBa;
    }

    outputFile << endl << endl;
    outputFile << "total deposite $" << setw(13) << totalDe << endl;
    outputFile << "total withdraw $" << setw(13) << totalWi << endl;
    outputFile << "total interest $" << setw(13) << totalIn << endl;
    outputFile << "final balance  $" << setw(13) << balance << endl;

    return 0;
}
