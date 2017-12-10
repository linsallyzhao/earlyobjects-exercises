#include <iostream>
#include <ctime>
#include <string>

int main()
{
    std::string name;
    int day, mon, year;
    std::cout << "Please enter your name:\n";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Please enter your date of birth, in format dd mm yyyy\n";
    std::cin >> day >> mon >> year;
    time_t epSeconds;
    tm *pCalendarTime;
    epSeconds = time(NULL);
    pCalendarTime = localtime(&epSeconds);
    int cuYear = 1900 + pCalendarTime->tm_year;

    std::cout << "Hello " << name << ", you are " << cuYear - year << " years old.\n";

    return 0;
}
