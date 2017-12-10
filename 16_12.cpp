#include <iostream>
#include "searchableVect.h"

using namespace std;

int main() {
    const int SIZE = 10;
    SearchableVector<int> intTable(SIZE);
    SearchableVector<double> doubleTable(SIZE);

    for (int i = 0; i < SIZE; i++) {
        intTable[i] = (i * 2);
        doubleTable[i] = (i * 2.14);
    }

    cout << "These are in intTable\n";
    intTable.printer();
    cout << "These are in doubelTable\n";
    doubleTable.printer();
    
    int result;
    cout << "Searching for 6 in intTable.\n";
    result = intTable.findItem(6);
    if (result == -1)
        cout << "6 was not found in intTable.\n";
    else
        cout << "6 was found at subscript " << result << endl;


    cout << "Searching for 12.84 in intTable.\n";
    result = intTable.findItem(12.84);
    if (result == -1)
        cout << "12.84 was not found in intTable.\n";
    else
        cout << "12.84 was found at subscript " << result << endl;

    return 0;
}


