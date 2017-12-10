#include <iostream>
#include <iomanip>

int main()
{
    double speed,
           time,
           distance;

    std::cout << "Please enter your speed and time\n";
    std::cin >> speed >> time;

    while ((speed < 0) || (time < 0))
    {
        std::cout << "Speed and time cannot be negative. Reenter please\n";
        std::cin >> speed >> time;
    }
    std::cout << "Hour      Miles Traveled\n"
              << "------------------------------\n";
    for (int count = 1; count <= time; count++)
    {
        distance = speed * count;
        std::cout << std::setw(4) << count << std::setw(12) << distance << std::endl;
    }
    return 0;
}
