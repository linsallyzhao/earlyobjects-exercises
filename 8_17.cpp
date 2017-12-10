#include <iostream>
using namespace std;

typedef int arrayType[];

void doubleArray (arrayType, int);
void showValues (arrayType, int);

int main() {
    const int ARRAY_SIZE = 7;
    arrayType set = {1, 2, 3, 4, 5, 6, 7};

    cout << "The arrays values are:\n";
    showValues(set, ARRAY_SIZE);

    doubleArray(set, ARRAY_SIZE);

    cout << "\nAftercalling doubel Array, the values are:\n";
    showValues(set, ARRAY_SIZE);
    cout << endl;
    return 0;
}

void doubleArray(arrayType nums, int size) {
    for (int index = 0; index < size; index++)
        nums[index] *= 2;
}

void showValues(arrayType nums, int size) {
    for (int index = 0; index < size; index++)
        cout << nums[index] << "  " << endl;
}
