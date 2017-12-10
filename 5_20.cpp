#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int numDays;
    double sales,
           total = 0.0;

    cout << "How many days of sales?";
    cin >> numDays;

    inputFile.open("Sales.txt");

    for (int count = 1; count <= numDays; count++) {
        inputFile >> sales;
        total += sales;
    }

    inputFile.close();

    cout << "Total sales for the " << numDays << " days were $" 
         << total << endl;

    return 0;
}
