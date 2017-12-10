#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    const int totalRoom = 120;
    int floor, room, total = 0;
    
    for (floor = 10; floor <= 16; floor++) {
        if (floor == 13)
            continue;
        else {
            cout << "How many room are occupied in floor #" << floor << "?\n";
            cin >> room;
            while (room < 0 || room > 20) {
                cout << "That is impossible, try again!\n";
                cin >> room;
            }
            total += room;
        }
    }

    cout << "There are " << totalRoom << " rooms in the hotel.\n";
    cout << total << " of these are occupied, which is " 
         << fixed << showpoint << setprecision(2)
         << (static_cast<double>(total) / totalRoom) * 100 << "%.\n";
    return 0;
}

