#include <iostream>
#include <iomanip>
#include "Circle.h"

using namespace std;

const int NUM_CIRCLES = 4;

int main() {
    Circle circle[NUM_CIRCLES];

    for (int index = 0; index < NUM_CIRCLES; index++) {
        double r;
        cout << "Enter the radius for circle " << (index + 1) << ": ";
        cin >> r;
        circle[index].setRadius(r);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the areas of the " << NUM_CIRCLES << " circles.\n";
    for (int index = 0; index < NUM_CIRCLES; index++) {
        cout << "Circle " << (index + 1) << setw(8) << circle[index].findArea()
             << endl;
    }

    return 0;
}


