#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_MON = 3;
    const int NUM_DAYS = 7;

    int food[NUM_MON][NUM_DAYS];
    int temp;

    for (int count_mon = 0; count_mon < NUM_MON; count_mon++) {
        for (int count_day = 0; count_day < NUM_DAYS; count_day++) {
            cout << "Please enter the food for monkey number " 
                 << (count_mon + 1) << " day " << (count_day + 1) << " :";
            cin >> temp;
            food[count_mon][count_day] = temp;
        }
    }

    double total = 0.0;
    double avg = 0.0;
    int high, low;

    high = low = food[0][0];

    for (int count_mon = 0; count_mon < NUM_MON; count_mon++) {
        for (int count_day = 0; count_day < NUM_DAYS; count_day++) {
            total += food[count_mon][count_day];
            if (food[count_mon][count_day] < low)
                low = food[count_mon][count_day];
            else if (food[count_mon][count_day] > high)
                high = food[count_mon][count_day];

        }
    }

    avg = total / (NUM_MON * NUM_DAYS);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Average food :" << setw(9) << avg << endl;
    cout << "Highest is :" << setw(9) << high << endl;
    cout << "Lowest amount is :" << setw(9) << low << endl;

    return 0;
}
