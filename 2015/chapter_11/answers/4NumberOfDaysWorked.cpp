#include <iostream>

class NumDays
{
    private:
        int hours;
        double days;
    public:
        NumDays(int num)
        {
            while(num < 0) 
            {   std::cout << "Invalid input, enter again\n";
                std::cin >> num;
            }

            hours = num;
            days = hours / 8 + (hours - 8 * (hours / 8)) / 8.0;
        }
        void setHours(int h)
        {
            hours = h;
            days = hours / 8 + (hours - 8 * (hours / 8)) / 8.0;
        }
        void setDays(double d)
        {
            days = d;
            hours = days * 8;
        }
        int getHours() const {return hours;}
        double getDays() const {return days;}
        friend NumDays operator+ (NumDays a, NumDays b);
        friend NumDays operator- (NumDays a, NumDays b);
        NumDays operator++ ();
        NumDays operator++ (int);
        NumDays operator-- ();
        NumDays operator-- (int);
};

NumDays operator+ (NumDays a, NumDays b)
{
    return NumDays(a.getHours() + b.getHours());
}
NumDays operator- (NumDays a, NumDays b)
{
    return NumDays(a.getHours() - b.getHours());
}
NumDays NumDays::operator++ ()
{
    hours++;
    setHours(hours);
    return *this;
}
NumDays NumDays::operator++ (int)
{
    NumDays temp = *this;
    hours++;
    setHours(hours);
    return temp;
}
NumDays NumDays::operator-- ()
{
    hours--;
    setHours(hours);
    return *this;
}
NumDays NumDays::operator-- (int)
{
    NumDays temp = *this;
    hours--;
    setHours(hours);
    return temp;
}

int main()
{
    NumDays test(36);
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    test.setHours(28);
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    NumDays test1(8);
    NumDays test2 = test1 + test;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;
    test2 = test - test1;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;
    test = test2++;
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;
    test = test2--;
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;
    test = ++test2;
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;
    test = --test2;
    std::cout << test.getHours() << std::endl;
    std::cout << test.getDays() << std::endl;
    std::cout << test2.getHours() << std::endl;
    std::cout << test2.getDays() << std::endl;

    return 0;
}

