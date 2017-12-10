#include <iostream>
using namespace std;

int main()
{
    double speed, time, distance;

    cout << "What was your speed (in kilometer per hour format)? \n";
    cin >> speed;

    cout << "How long did you travelled (in hours)? \n";
    cin >> time;

    distance = speed * time;
    cout << "You travelled " << distance << " kilometers. \n";

    return 0;

}
