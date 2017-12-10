#include <iostream>
using namespace std;

int main()
{
    int totalSeconds = 125,
        minutes,
        seconds;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    cout << totalSeconds << " seconds is equivalent to ";
    cout << minutes << " minutes and " << seconds << " seconds. \n";

    return 0;

}
