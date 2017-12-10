#include <cstdlib>
#include <iostream>
#include <string>

class DayOfYear
{
    private:
        int day;
        static std::string monName[];
        static int monDays[];
    public:
        DayOfYear(int num = 0)
        {
            while (num <= 0 || num > 365)
            {
                std::cout << "Invalid input\n";
                std::cin >> num;
            }
            day = num;
        }
        DayOfYear(std::string mon, int date);
        void print();
        DayOfYear operator++ ();
        DayOfYear operator-- ();
        DayOfYear operator++ (int);
        DayOfYear operator-- (int);

};

std::string DayOfYear::monName[] = {"Jan", "Feb", "Mar", "Apr",
                                    "May", "Jun", "Jul", "Aug",
                                    "Sep", "Oct", "Nov", "Dec"};
int DayOfYear::monDays[] =
                {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

DayOfYear::DayOfYear(std::string mon, int date)
{
    int month = 0;
    int total = 0;
    for (int index = 0; index < 12; index++)
    {
        if (mon == monName[index])
            month = index;
    }
    if (date > monDays[month])
    {
        std::cout << "Invalid day in the given month\n";
        exit(1);
    }
    for (int index = 0; index < month; index++)
    {
        total += monDays[index];
    }
    day = total + date;
}


DayOfYear DayOfYear::operator++ ()
{
    if (day < 365)
    {
        day++;
    }
    else
    {
        day = 1;
    }
    return *this;
}

DayOfYear DayOfYear::operator-- ()
{
    if (day > 1)
    {
        day--;
    }
    else
    {
        day = 365;
    }
    return *this;
}
DayOfYear DayOfYear::operator++ (int)
{
    DayOfYear temp = *this;
    if (day < 365)
    {
        day++;
    }
    else
    {
        day = 1;
    }
    return temp;
}
DayOfYear DayOfYear::operator-- (int)
{
    DayOfYear temp = *this;
    if (day > 1)
    {
        day--;
    }
    else
    {
        day = 365;
    }
    return temp;
}

void DayOfYear::print()
{
    int count = 11;
    int total;
    std::cout << "Day " << day << " would be ";
    do
    {
        total = 0;
        for (int index = 0; index < count; index++)
        {
            total += monDays[index];
        }
        count--;
    } while (count >= 0 && day < total);
    std::cout << monName[count + 1] << " ";
    if (count == -1)
        std::cout << day << std::endl;
    else
        std::cout << (day - total) << std::endl;
}

int main()
{
    int day;
    std::string month;
    std::cout << "Enter day\n";
    std::cin >> day;
    std::cout << "Enter month\n";
    std::cin >> month;
    DayOfYear test(month, day);
    test.print();
    test++.print();
    test.print();
    test--.print();
    test.print();
    DayOfYear test2 = ++test;
    test.print();
    test2.print();
    test2 = --test;
    test.print();
    test2.print();
    

    return 0;
}
