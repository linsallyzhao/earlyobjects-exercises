#include <iostream>
using namespace std;

int binarySearch (int nums[], int size, int key);
int main() {
    int pool[10] = {13579, 26791, 26792, 33445, 55555, 62483,
                    77777, 79422, 85647, 93121};

    int user;
    int pos;

    cout << "Please enter the winning number: \n";
    cin >> user;

    pos = binarySearch(pool, 10, user);
    if (pos == -1) 
        cout << "Not winning\n";
    else 
        cout << "Number " << pool[pos] << " in the #" << (pos + 1) 
             << " position is winning.\n";


    return 0;
}

int binarySearch (int nums[], int size, int key) {
    int first, last, middle, pos;
    pos = -1;
    first = 0;
    last = size - 1;
    middle = size / 2;
    bool found = false;
    while (!found && first <= last) {
        if (nums[middle] == key) {
            found = true;
            pos = middle;
        } else if (nums[middle] > key) {
            last = middle - 1;
        } else if (nums[middle] < key) {
            first = middle + 1;
        }
        middle = (last + first) / 2;
    }

    return pos;
}



    
