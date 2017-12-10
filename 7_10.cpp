#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int vacationDays,
        daysUsed;

    Employee( int d = 10) {
        vacationDays = d;
        daysUsed = 3;
    }
};

int main () {
    Employee guy1 = {15, 7};
    Employee guy2 = {3};
    cout << guy1.vacationDays << endl;
    cout << guy1.daysUsed << endl;
    cout << guy2.vacationDays << endl;
    cout << guy2.daysUsed << endl;

    return 0;
}
