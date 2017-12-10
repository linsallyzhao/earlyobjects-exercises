#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double S_AIR = 1100.0, S_WATER = 4900.0, S_STEEL = 16400.0;
    double distance, time, speed;
    int choice;


    cout << "Please enter the distance traveled.";
    cin >> distance;

    if (distance >= 0) {

        cout << "Please choose the medium:\n\n";
        cout << "1. Air\n";
        cout << "2. Water\n";
        cout << "3. Steel\n";
        cin >> choice;

        switch (choice) {
            case 1: speed = S_AIR;
                    break;
            case 2: speed = S_WATER;
                    break;
            case 3: speed = S_STEEL;
                    break;
            default: cout << "Do you want to calculate or not?\n";
        }

        time = distance / speed;

        cout << fixed << showpoint << setprecision(4);
        cout << "The travel time is " << time << " seconds.\n";
    }
    else
        cout << "The distance cannot be negative, althought speed can be...\n";
    
    return 0;
}

