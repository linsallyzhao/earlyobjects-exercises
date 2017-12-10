#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;
    int numDays;
    double sales;

    cout << "For how many days do you have sales?\n";
    cin >> numDays;

    outputFile.open("Sales.txt");
    
    for (int count = 1; count <= numDays; count++){
        cout << "Enter the sale for day #" << count << endl;
        cin >> sales;
        
        outputFile << sales << endl;
    }

    outputFile.close();
    cout << "Data written to Sales.txt\n";

    return 0;
}
