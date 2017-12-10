#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double index = 0.6214;
    double mph, kph;

    cout << setw(15) << "Mile per Hour" << setw(25) << "Kilometers per Hour" << endl;
    for (kph = 40; kph <= 120; kph += 5) {
        mph = index * kph;
        cout << fixed << showpoint << setprecision(2);
        cout << setw(15) << mph << setw(25) << kph << endl;
    }

    return 0;
}

