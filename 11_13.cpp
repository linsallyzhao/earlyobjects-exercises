#include <iostream>
#include "intarray.h"
#include "intarray.cpp"

using namespace std;

int main() {
    IntArray table(10);


    for (int x = 0; x < table.size(); x++) 
        table[x] = (x * 2);

    for (int x = 0; x < table.size(); x++) 
        cout << table[x] << " ";
    cout << endl;

    for (int x = 0; x < table.size(); x++) 
        table[x] += 5;

    for (int x = 0; x < table.size(); x++) 
        cout << table[x] << " ";
    cout << endl;


    for (int x = 0; x < table.size(); x++) 
        table[x]++;

    for (int x = 0; x < table.size(); x++) 
        cout << table[x] << " ";
    cout << endl;


    return 0;
}

