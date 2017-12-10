#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    const int NUM_EMPS = 5;
    vector<int> hours(NUM_EMPS);
    vector<double> payRate(NUM_EMPS);
    double grossPay;
    int index;

    cout << "Enter the hour worked and hourly pay rates of "
         << NUM_EMPS << " employees.\n";

    for (index = 0; index < NUM_EMPS; index++) {
        cout << "Hours worked by employees #" << (index + 1) << " :";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPS; index++) {
        grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << setw(7) << grossPay << endl;
    }

    return 0;
}
