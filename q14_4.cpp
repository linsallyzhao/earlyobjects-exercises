#include <iostream>

using namespace std;

int sum(int *arr, int size);
const int SIZE = 10;
int main() {
    int array[SIZE];
    cout << "Please enter ten integers:\n";
    for (int i = 0; i < SIZE; i++) 
        cin >> array[i];
    cout << "The sum of all these integers is " << sum(array, SIZE) << endl;

    return 0;
}

int sum(int *arr, int size) {
    int sumy = arr[0];
    if (size == 0){
        return 0;
    }
    sumy += sum( (arr + 1), (size - 1));

    return sumy;
}
