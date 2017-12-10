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
        void print();
};

std::string DayOfYear::monName[] = {"Jan", "Feb", "Mar", "Apr",
                                    "May", "Jun", "Jul", "Aug",
                                    "Sep", "Oct", "Nov", "Dec"};
int DayOfYear::monDays[] =
                {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
    std::cout << "Enter day\n";
    std::cin >> day;
    DayOfYear test(day);
    test.print();

    return 0;
}
