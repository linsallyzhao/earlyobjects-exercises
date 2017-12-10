#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int days;
    double payment,
           total = 0.0;

    cout << "How many days have you worked last month?" << endl;
    cin >> days;

    while (days < 0 || days > 31){
        cout << "Invalid number of days. Try again please!\n";
        cin >> days;
    }
    cout << setw(20) << "Day number" << setw(20) << "Salary\n";
    cout << fixed << showpoint << setprecision(2);
    for (int count = 1; count <=days; count++) {
        payment = pow(2, count-1) / 100;
        total += payment;

        cout << setw(20) << count << setw(20) << payment << endl;
    }

    cout << "Your total payment is $" << total << endl;
    return 0;
}

