#include <iostream>
#include <iomanip>

int main()
{
    int total = 0, single;
    double percentage;

    for (int floor = 10; floor <= 16; floor++)
    {
        if (floor == 13)
            continue;
        std::cout << "How many rooms are occupied in floor " << floor << "?\n";
        std::cin >> single;
        while ((single < 1) || (single > 20))
        {
            std::cout << "Invalid input. Try again.";
            std::cin >> single;
        }
        total += single;
    }
    percentage = (total / 120.0) * 100;
    std::cout << "Off the 120 suites of the hotel, "
              << total << " are occupied. And occupancy rate is " 
              << std::fixed << std::setprecision(2) << percentage << "%.\n";
    return 0;
}

