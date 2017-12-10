#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo {
    int hours;
    double payRate;
};

int main() {    
    const int NUM_EMPS = 3;
    int index;
    PayInfo workers[NUM_EMPS];
    double grossPay;

    cout << "Enter the hours worked and hourly pay rates of "
         << NUM_EMPS << " employees. ";

    for (index = 0; index < NUM_EMPS; index++) {
        cout << "\n Hours worked by employee #" << (index + 1);
        cout << " :";
        cin >> workers[index].hours;
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> workers[index].payRate;
    }

    cout << "\nHere is the gross pay for ecah employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPS; index++) {
        grossPay = workers[index].hours * workers[index].payRate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << setw(7) << grossPay << endl;
    }

    return 0;
}
