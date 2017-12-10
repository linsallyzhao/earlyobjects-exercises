#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void getInfo (char &IO, int &days, double &rate, double &service, double &medi);
double charge (int days, double rate, double service, double medi);
double charge (double service, double medi);

int main() {
    int days;
    char choice;
    double rate, service, medi, total = 0.0;
    string fileName;

    getInfo (choice, days, rate, service, medi);
    
    ofstream outputFile;
    cout << "Where do you want your report to be saved?\n";
    cin >> fileName;
    outputFile.open(fileName.c_str());
    
    
    if (choice == 'i' || choice == 'I') {
        total = charge (days, rate, service, medi);
        outputFile << "You are an in-patient.\n";
        outputFile << "You stayed " << days << " days in hospital, ";
        outputFile << "and the daily charge is $" << rate;
        outputFile << ". \nService fee is $" << service;
        outputFile << ", and medication cost $" << medi << endl;
        outputFile << "Your total charge is $" << total << endl;
    }

    else {
        total = charge (service, medi);
        outputFile << "You are an out-patient.\n"
                   << "Service fee is $" << service 
                   << ", and medication cost $" << medi << endl
                   << "Your total charge is $" << total << endl;
    }

    return 0;
}


void getInfo (char &IO, int &days, double &rate, double &service, double &medi) {
    cout << "Are you an in-patient or an out-patient (I / O)?\n";
    cin >> IO;
    while (IO != 'i' && IO != 'I' && IO != 'o' && IO != 'O') {
        cout << "The choice and only be o, O, i, or I.\n";
        cin >> IO;
    }

    if (IO == 'i' || IO == 'I') {
        cout << "please enter days of stay, daily rate, hospital service and "
             << "medication charge:\n";
        cin >> days >> rate >> service >> medi;
    }else if (IO = 'o' || IO == 'O') {
        cout << "Please enter the hospital service charge and medication fees:\n";
        cin >> service >> medi;
        days = rate = 0;
    }

    while (days < 0 || rate < 0 || service < 0 || medi <0) {
        if (days < 0) {
            cout << "Number of days cannot be negative.\n";
            cout << "Please enter the days again:\n";
            cin >> days;
        }
        if (rate < 0) {
            cout << "Daily charge cannot be negative.\n";
            cout << "Please enter the daily charge again:\n";
            cin >> rate;
        }
        if (service < 0) {
            cout << "Service fee cannot be negative.\n";
            cout << "Please enter the sevice again:\n";
            cin >> service;
        }
        if (medi < 0) { 
            cout << "Medication fee cannot be negative.\n";
            cout << "Please enter the fee again:\n";
            cin >> medi;
        }
    }
}

double charge (int days, double rate, double service, double medi) {
    double totalFee = 0.0;
    totalFee = days * rate + service + medi;
    return totalFee;
}

double charge (double service, double medi) {
    double totalFee = 0.0;
    totalFee = service + medi;
    return totalFee;
}
