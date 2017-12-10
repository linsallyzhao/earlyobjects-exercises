#include <iostream>
#include <string>

class Date
{
    private :
        int month;
        int day;
        int year;
        std::string monthName;
        void getMonthName();

    public :
        Date(int month = 1, int day = 1, int year = 2001);
        void format1();
        void format2();
        void format3();
};

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
    if (year < 0 || month > 12 || month < 1 || day > 31 || day < 1)
    {
        std::cout << "BEEEEEE! Invalid!!\n";
        month = 1;
        day = 1;
        year = 2001;
        return;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
        {
            std::cout << "BEEEEEE! Invalid!!\n";
            month = 1;
            day = 1;
            year = 2001;
            return;
        }
    }
    else if (month == 2)
    {
        if (day > 28)
        {
            std::cout << "BEEEEEE! Invalid!!\n";
            month = 1;
            day = 1;
            year = 2001;
            return;
        }
    }
}

void Date::format1()
{
    std::cout << month << "/" << day << "/" << year << std::endl;
}

void Date::getMonthName()
{
    if (month == 1)
        monthName = "January";
    else if (month == 2)
        monthName = "Feb";
    else if (month == 3)
        monthName = "March";
    else if (month == 4)
        monthName = "Apr";
    else if (month == 5)
        monthName = "May";
    else if (month == 6)
        monthName = "Jun";
    else if (month == 7)
        monthName = "July";
    else if (month == 8)
        monthName = "Aug";
    else if (month == 9)
        monthName = "Sep";
    else if (month == 10)
        monthName = "Oct";
    else if (month == 11)
        monthName = "Nov";
    else if (month == 12)
        monthName = "Dec";
}

void Date::format2()
{
    getMonthName();
    std::cout << monthName << " " << day << ", " << year << std::endl;
}

void Date::format3()
{
    std::cout << day << " " << monthName << " " << year << std::endl;
}

int main()
{
    Date date(3, 15, 2013);
    date.format1();
    date.format2();
    date.format3();

    Date date2;
    date2.format1();
    date2.format2();
    date2.format3();

    Date date3(3, 78, 2003);
    date3.format1();
    date3.format2();
    date3.format3();

    return 0;
}

