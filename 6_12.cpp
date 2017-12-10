#include <iostream>
#include <iomanip>

using namespace std;

double getRadius();
double square(double);

int main() {
    const double PI = 3.14159;
    double radius;
    double area;

    cout << fixed << showpoint << setprecision(2);

    cout << "This program calculates the area of a circle.\n";
    radius = getRadius();
    area = PI * square(radius);

    cout << "The area is " << area << endl;
    return 0;
}


double getRadius() {
    double rad;

    cout << "Please enter the radius:\n";
    cin >> rad;
    while (rad < 0) {
        cout << "Invalid input. Please enter again:\n";
        cin >> rad;
    }

    return rad;
}

double square (double rad) {
    return rad * rad;
}
