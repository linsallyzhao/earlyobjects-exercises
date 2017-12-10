#include <iostream>
#include <ctime>
#include <string>

int main()
{
    int mon, year;
    time_t epSeconds;
    tm *pCalendarTime;

    std::string month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    epSeconds = time(NULL);
    pCalendarTime = localtime(&epSeconds);
    std::cout << "Enter the month and year: ";
    std::cin >> mon >> year;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mon == 0)
    {
        mon = pCalendarTime->tm_mon + 1;
        year = pCalendarTime->tm_year + 1900;
        std::cout << "The current month, " << month[pCalendarTime->tm_mon]
                  << " " << 1900 + pCalendarTime->tm_year << ", has ";
    }

    if (mon == 2)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                std::cout << days[1] + 1 << " days\n";
        }
        else if (year % 4 == 0)
            std::cout << days[1] + 1 << " days\n";
        else
            std::cout << days[1] << " days\n";
    }
    else
        std::cout << days[mon - 1] << " days\n";
    return 0;
}



