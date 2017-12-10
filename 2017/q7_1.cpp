#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main () {
    int d, m, y;
    Date df;
    df.printDate();

    cout << "\nPlease enter day, month, and year in this order:\n";
    cin >> d >> m >> y;

    Date today(d, m, y);
    today.printDate();

    return 0;
}
