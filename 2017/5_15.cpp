#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numDVDS;
    double total = 0.0;
    char current;

    cout << "How many DVD are being rented?\n";
    cin >> numDVDS;

    for (int count = 1; count <= numDVDS; count++) {
        if (count % 3 ==0) {
            cout << "DVD #" << count << " is free!\n";
            continue;
        }
        cout << "Is DVD #" << count << " a current release (Y/N)?\n";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else 
            total += 2.50;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;
    return 0;
}
