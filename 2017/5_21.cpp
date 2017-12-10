#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int numDays = 0;
    double sales,
           total = 0.0;

    inputFile.open("Sales.txt");
    
    while (inputFile >> sales) {
        total += sales;
        numDays++;
    }

    inputFile.close();

    cout << "Total sales for the " << numDays << " days were $" 
         << total << endl;

    return 0;
}
