#include <iostream>

int main()
{
    int date, month, year;

    std::cout << "Please enter a date, a month, and a two-digit year\n"
              << "(all in numeric form)\n";
    std::cin >> date >> month >> year;

    if ((date > 0) && (date < 32))
        if ((month > 0) && (month < 13))
            if ((year > 0) && (year < 100))
            {
                std::cout << "Input valid. \n";
                if (month * date == year)
                    std::cout << "This is magic date. \n";
                else
                    std::cout << "Not magic enough. \n";
            }
            else
                std::cout << "Year input is invalid. \n";
        else
            std::cout << "Month input is invalid. \n";
    else
        std::cout << "Date input is invalid. \n";

   return 0;
}
