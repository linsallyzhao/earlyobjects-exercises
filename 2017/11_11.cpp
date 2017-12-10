#include <iostream>
#include "Length1.h"
#include "Length1.cpp"

using namespace std;

int main() {
    Length first(0), second(1, 9), c(0);

    cout << "Demostrating prefix ++ operator and output operator.\n";
    for (int count = 0; count < 4; count++) {
        first = ++second;
        cout << "First: " << first << ". Second: " << second << ".\n";
    }

    cout << "\nDemostrating postfix ++ operator and ouput operator.\n";
    for (int count = 0; count < 4; count++) {
        first = second++;
        cout << "First: " << first << ". Second: " << second << ".\n";
    }

    cout << "\nDemonstrating input and output operators.\n";
    cin >> c;
    cout << "You entered " << c << "." << endl;
    return 0;
}

