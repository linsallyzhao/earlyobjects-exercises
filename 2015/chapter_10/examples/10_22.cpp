#include <iostream>
#include <ctime>
#include <string>

int main()
{
    time_t epSeconds;
    tm *pCalendarTime;

    std::string wDay[] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                            "Thursday", "Friday", "Saturday"};

    std::string month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul"
                    "Aug", "Sep", "Oct", "Nov", "Dec"};

    epSeconds = time(NULL);
    pCalendarTime = localtime(&epSeconds);

    std::cout << "Today is " << wDay[pCalendarTime->tm_wday]
              << "  " << month[pCalendarTime->tm_mon]
              << "  " << pCalendarTime->tm_mday
              << "  " << 1900 + pCalendarTime->tm_year << std::endl;

   return 0;
}

