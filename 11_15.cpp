#include "Length1.h"
#include "Length1.cpp"

#include <iostream>
#include <string>
using namespace std;

int main() {
    Length distance(0);
    double feet;
    int inches;
    distance.setLength(4, 6);
    cout << "The length object is " << distance << "." << endl;

    feet = distance;
    inches = distance;
    cout << "The length object measures " << feet << " feet." << endl;
    cout << "The length object measures " << inches << " inches." << endl;

    return 0;
}
