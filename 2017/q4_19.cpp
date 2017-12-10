#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
    const double EARLY_MORNING = 0.12, DAY_TIME = 0.55, LATE_NIGHT = 0.35;
    int hour;
    double time, minute, length, price,cost;

    cout << "Please enter the time you started the call\n";
    cin >> time;

    hour = static_cast<int>(time);
    minute = time - hour;

    if (hour >= 0 && hour < 24 && minute < .6) {     // Should just add another condition anyway?
       if (time > 0 && time <=6.59) price = EARLY_MORNING;
       else if (time >= 7 && time <= 19) price = DAY_TIME;
       else if (time >= 19.01 && time <= 23.59) price = LATE_NIGHT;
       cout << "How long was the call?\n";
       cin >> length;

       cost = price * length;

       cout << "Your cost will be $" 
            << fixed << showpoint << setprecision(2)
            << cost << endl;
    }
    else cout << "Time entered is invalid!\n";
    return 0;
}
