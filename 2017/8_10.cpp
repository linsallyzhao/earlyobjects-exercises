#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    const int NUM_OFFICES = 12;
    ifstream dataIn;
    int office;
    double sales[NUM_OFFICES],
           totalSales = 0.0,
           averageSales,
           highestSales,
           lowestSales;

    dataIn.open("sales.dat");
    if (!dataIn)
        cout << "Error opening data file!\n";
    else {
        for (office = 0; office < NUM_OFFICES; office++) 
            dataIn >> sales[office];
        dataIn.close();

        for (office = 0; office < NUM_OFFICES; office++) 
            totalSales += sales[office];
        averageSales = totalSales / NUM_OFFICES;

        highestSales = lowestSales = sales[0];
        for (office = 1; office < NUM_OFFICES; office++) {  
            if (sales[office] > highestSales)
                highestSales = sales[office];
            else if (sales[office] < lowestSales)
                lowestSales = sales[office];
        }

        cout << fixed << showpoint << setprecision(2);
        cout << "Total sales     $" << setw(9) << totalSales << endl;
        cout << "Average sales   $" << setw(9) << averageSales << endl;
        cout << "Highest sales   $" << setw(9) << highestSales << endl;
        cout << "Lowest sales    $" << setw(9) << lowestSales << endl;
    }
    return 0;
}

