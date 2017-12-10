#include <iostream>
#include <iomanip>
#include "overload.h"
#include "overload.cpp"

using namespace std;

int main() {
    NumberArray first(3, 10.5);
    NumberArray second(5, 20.5);

    cout << setprecision(2) << fixed << showpoint;
    cout << "First object's data is ";
    first.print();
    cout << endl << "Second object's data is ";
    second.print();

    cout << "\nNow we will assign the second object " << "to the first.\n";
    first = second;

    cout << endl;
    cout << "First object's data is ";
    first.print();
    cout << endl << "Second object's data is ";
    second.print();

    return 0;
}
