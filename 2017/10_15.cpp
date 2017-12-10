#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int *getRandomNumbers(int n);

int main() {
    int *numbers;

    numbers = getRandomNumbers(5);

    for (int count = 0; count < 5; count++) 
        cout << numbers[count] << endl;

    delete [] numbers;
    numbers = 0;
    return 0;
}

int *getRandomNumbers(int n) {
    int *array;

    if(n <=0)
        return NULL;

    array = new int[n];

    srand(time(0));

    for (int count = 0; count < n; count++) 
        array[count] = rand();
    return array;
}
