#include <iostream>
#include "simpleVector.cpp"

using namespace std;

int main() {
    const int SIZE = 10;
    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    for (int i = 0; i < SIZE; i++) {
        intTable[i] = (i * 2);
        doubleTable[i] = (i * 2.14);
    }

    cout << "These are in intTable\n";
    intTable.printer();
    cout << "These are in doubelTable\n";
    doubleTable.printer();

    for (int x = 0; x < SIZE; x++) {
        intTable[x] += 5;
        doubleTable[x] += 1.5;
    }

    
    cout << "These are in intTable\n";
    intTable.printer();
    cout << "These are in doubelTable\n";
    doubleTable.printer();

    for (int c = 0; c < SIZE; c++) {
        intTable[c]++;
        doubleTable[c]++;
    }


    cout << "These are in intTable\n";
    intTable.printer();
    cout << "These are in doubelTable\n";
    doubleTable.printer();

    cout << endl;

    return 0;
}
