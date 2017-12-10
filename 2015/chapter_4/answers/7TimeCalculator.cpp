#include <iostream>

int main()
{
    double second, day, hour, min;

    std::cout << "Please enter the number of seconds. \n";
    std::cin >> second;

    if (second >= 86400)
    {
        day = second / 86400;
        std::cout << "That is " << day << " days. \n";
    }
    else if (second >= 3600)
    {
        hour = second / 3600;
        std::cout << "That is " << hour << " hours. \n";
    }
    else
    {
        min = second / 60;
        std::cout << "That is " << min << " minutes. \n";
    }

    return 0;
}
