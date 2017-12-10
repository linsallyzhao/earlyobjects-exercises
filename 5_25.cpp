#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double payment,
           loan,
           rate,
           term,
           payIn,
           payPri,
           years,
           monIn;
    int numPay, count;
    string fileName;

    cout << "Please enter the loan amount, annual interest rate, and your term"
         << " in this order:\n";
    cin >> loan >> rate >> years;

    while (loan <= 0 || rate <= 0 || years <0) {
        cout << "Do you want to calculate or not?\n";
        cout << "Let's try again.\n";
        cout << "Please enter the loan amount, annual interest rate, and your term"
             << " in this order:\n";
        cin >> loan >> rate >> years;
    }

    ofstream outputFile;
    cout << "Where do you want to save your report?\n";
    cin >> fileName;

    outputFile.open(fileName.c_str());

    numPay = static_cast<int>(years * 12);
    monIn = rate / 12;

    term = pow(1 + monIn, numPay);
    payment = (loan * monIn * term) / (term - 1);

    outputFile << "Your monthly payment will be $" << payment << endl;
    outputFile << "\n\nMonth  Interest  Principal Balance\n";
    outputFile << "-----------------------------------------------\n";
    outputFile << fixed << showpoint << setprecision(2);

    for (count = 1; count <=numPay; count++) {

        payIn = loan * monIn;
        payPri = payment - payIn;
        loan -= payPri;
        
        outputFile << setw(4) << count << setw(10) << payIn << setw(10) << payPri
             << setw(10) << loan << endl;
    }
    return 0;
}


