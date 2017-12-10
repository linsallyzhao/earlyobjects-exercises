#include <iostream>
#include <iomanip>

int main()
{
    double MPH;

    std::cout << "  KPH             MPH\n"
              << "**************************\n";
    for (int count = 40; count <= 120; count += 5)
    {
        MPH = count * 0.6214;
        std::cout << std::setw(5) << count << std::setw(18) << MPH << std::endl;
    }
    return 0;
}

