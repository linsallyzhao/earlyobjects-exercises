#include <iostream>
#include <iomanip>

using namespace std;

double fallingDistance (double);

int main() {
    double time, distance;

    cout << fixed << showpoint << setprecision (2);
    for (time = 1.0; time <= 10; time++) {
        distance = fallingDistance (time);
        cout << "For falling time " << time << " seconds, "
             << "the falling distance is " << distance << " meters\n";
    }

    return 0;
}

double fallingDistance (double t) {
    const double G = 9.8;
    double distance;
    distance = 0.5 * G * t * t;

    return distance;
}

