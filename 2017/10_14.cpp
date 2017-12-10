#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double *sales,
           total = 0.0,
           average;

    int numDays;

    cout << "How many days of sales fiures do you wish to process?\n";
    cin >> numDays;

    sales = new double[numDays];
    cout << "Enter the sales figures below.\n";
    for (int count = 0; count < numDays; count++) {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }

    for (int count = 0; count < numDays; count++) {
        total += sales[count];
    }

    average = total / numDays;

    cout << setprecision(2) << fixed << showpoint;
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    delete [] sales;
    sales = 0;
    return 0;
}
