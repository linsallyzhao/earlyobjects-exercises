#include <iostream>
#include <iomanip>

using namespace std;

const double PAY_RATE = 22.25,
             BASE_HOURS = 40.0,
             OT_INDEX = 1.5;

double getBasePay(double);
double getOvertimePay(double);

int main() {
    double hours, basePay, overtimePay, totalPay;

    cout << "How many hours did you work?\n";
    cin >> hours;

    basePay = getBasePay(hours);
    overtimePay = getOvertimePay(hours);

    totalPay = basePay + overtimePay;

    cout << setprecision(2) << showpoint << fixed;
    cout << "Base pay     $" << setw(7) << basePay << endl;
    cout << "Overtime Pay $" << setw(7) << overtimePay << endl;
    cout << "Total Pay    $" << setw(7) << totalPay << endl;
    return 0;
}

double getBasePay(double hoursWorked) {
    double basePay;

    if (hoursWorked > BASE_HOURS) 
        basePay = BASE_HOURS * PAY_RATE;
    else
        basePay = hoursWorked * PAY_RATE;

    return basePay;
}

double getOvertimePay (double hoursWorked) {
    double overtimePay;
    if (hoursWorked <= BASE_HOURS)
        overtimePay = 0.0;
    else
        overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_INDEX;

    return overtimePay;
}

