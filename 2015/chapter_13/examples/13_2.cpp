#include <iostream>
#include <iomanip>
#include <sstream>

std::string dollarFormat(double);

int main()
{
    const int ROWS = 3, COLS = 2;
    double amount[ROWS][COLS] = {184.45, 1, 59.13, 64.32, 7.29, 1289};

    std::cout << std::left;
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLS; column++)
        {
            std::cout << std::setw(10)
                      << dollarFormat(amount[row][column]);
        }
        std::cout << std::endl;
    }
    return 0;
}

std::string dollarFormat(double amount)
{
    std::ostringstream outStr;
    outStr << std::showpoint << std::fixed << std::setprecision(2);
    outStr << '$' << amount;
    return outStr.str();
}

