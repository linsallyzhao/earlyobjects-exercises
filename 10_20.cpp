#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    time_t epSeconds;
    tm *pCalenderTime;

    string wDay[] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                     "Thursday", "Friday", "Saturday"};

    string month[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", 
                      "December"};

    epSeconds = time(NULL);
    pCalenderTime = localtime(&epSeconds);

    cout << "Today is " << wDay[pCalenderTime->tm_wday] << " "
         << month[pCalenderTime->tm_mon] << " " << pCalenderTime->tm_mday
         << " " << 1900 + pCalenderTime->tm_year << endl;

    return 0;
}


