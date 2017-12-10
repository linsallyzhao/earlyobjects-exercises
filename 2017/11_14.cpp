#include <iostream>
#include "intarray.h"
#include "intarray.cpp"

using namespace std;

int main() {
    IntArray table(10);

    for (int x = 0; x < table.size(); x++) 
        table[x] = x;

    for (int x = 0; x < table.size(); x++)
        cout << table[x] << " ";

    cout << endl;

    cout << "Attempting to store outside the array bounds:\n";
    table[table.size()] = 0;

    return 0;
}
