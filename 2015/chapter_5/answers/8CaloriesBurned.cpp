#include <iostream>
#include <iomanip>

int main()
{
    const double UNIT = 3.9;
    double total = 0;

    std::cout << "Minute        Calories\n"
              << "-------------------------------\n";
    for (int count = 10; count <= 30; count += 5)
    {
        total += (UNIT * 5);
        std::cout << std::setw(6) << count
                  << std::setw(15) << std::fixed << std::setprecision(2) << total
                  << std::endl;
    }
    return 0;
}

