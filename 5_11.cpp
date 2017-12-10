#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numDays;
    double dailySales,
           totalSales = 0.0,
           averageSales;
    cout << "For how many days do you have sales figures?";
    cin >> numDays;

    for (int day = 1; day <=numDays; day++){
        cout << "Enter the sales for day " << day << ": ";
        cin >> dailySales;
        totalSales += dailySales;
    }

    averageSales = totalSales / numDays;

    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal sales:           $" << setw(8) << totalSales;
    cout << "\nAverage daily sales    $" << setw(8) << averageSales << endl;

    return 0;
}
