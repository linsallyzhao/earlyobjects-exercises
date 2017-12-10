#include <iostream>
using namespace std;

int linearSearch (int nums[], int size, int key);
int main() {
    int pool[10] = {13579, 26791, 26792, 33445, 55555, 62483,
                    77777, 79422, 85647, 93121};

    int user;
    int pos;

    cout << "Please enter the winning number: \n";
    cin >> user;

    pos = linearSearch(pool, 10, user);
    if (pos == -1) 
        cout << "Not winning\n";
    else 
        cout << "Number " << pool[pos] << " in the #" << (pos + 1) 
             << " position is winning.\n";


    return 0;
}

int linearSearch (int nums[], int size, int key) {
    int pos = -1;
    bool found = false;
    int index = 0;
    while (index < size && !found) {    
        if(nums[index] == key) {
            pos = index;
            found = true;
        }
        index++;
    }

    return pos;
}


    
