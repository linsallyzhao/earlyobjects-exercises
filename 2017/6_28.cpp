#include <iostream>
#include <iomanip>
using namespace std;

char getChoice();
double calcWeeklyPay (int, double);
double calcWeeklyPay (double);

int main() {
    char selection;
    int hours;
    double rate, yearly;

    cout << fixed << showpoint << setprecision(2);

    cout << "Do you want to calculate the weekly pay of \n";
    cout << "(H) an hourly_wage enployee, or \n";
    cout << "(S) a salaried employee?\n";
    selection = getChoice();

    switch (selection) {
        case 'h':
        case 'H': cout << "How many hours were worked?\n";
                  cin >> hours;
                  cout << "What is the hourly pay rate?\n";
                  cin >> rate;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay (hours, rate) << endl;
                  break;

        case 's':
        case 'S': cout << "What is your annual salary?\n";
                  cin >> yearly;
                  cout << "The gross weekly pay is $";
                  cout << calcWeeklyPay (yearly) << endl;

    }
    return 0;
}

char getChoice() {
    char choice;
    cin >> choice;

    while ( choice != 's' && choice != 'S' && choice != 'h' && choice != 'H') {
        cout << "Has to be H or S";
        cin >> choice;
    }
    return choice;
}

double calcWeeklyPay (int time, double payRate) {
    return time * payRate;
}

double calcWeeklyPay (double salary) {
    return salary / 52.0;
}
