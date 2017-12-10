#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_WORKERS = 5;
    int hours[NUM_WORKERS];
    double payRate;

    cout << "Enter the hours worked by \n";
    for (int worker = 0; worker < NUM_WORKERS; worker++) {
        cout << "Employee #" << (worker + 1) << ": ";
        cin >> hours[worker];
    }

    cout << "\nEnter the hourly pay rate for all the employees: ";
    cin >> payRate;

    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int worker = 0; worker < NUM_WORKERS; worker++) {
        double grossPay = hours[worker] * payRate;
        cout << "Employee #" << (worker + 1) << ": $" 
             << setw(7) << grossPay << endl;
    }

    return 0;
}
