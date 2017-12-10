#include <iostream>
#include <iomanip>

int main()
{
    double inflation, realValue = 1000;

    std::cout << "Please enter inflation rate between 1 and 15\n";
    std::cin >> inflation;
    while ((inflation < 0.01) || (inflation > 0.15))
    {
        std::cout << "Inflation rate is invalid. Enter again please. \n";
        std::cin >> inflation;
    }

    std::cout << "Year      Real Value\n";
    std::cout << "*************************\n";

    for (int count = 1; count <= 10; count++)
    {
        realValue *= (1 + inflation);
        std::cout << std::setw(4) << count << std::setw(15)
                  << std::fixed << std::setprecision(2) << realValue << std::endl;
    }
    return 0;
}
