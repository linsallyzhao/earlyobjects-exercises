#include <iostream>
#include <iomanip>

int main()
{
    double rise = 0;
    const double SPEED = 3.1;

    std::cout << "Year         rise\n"
              << "_________________\n";
    for (int count = 1; count <= 25; count++)
    {
        rise += SPEED;
        std::cout << std::setw(4) << count << std::setw(12) << rise << std::endl;
    }
    return 0;
}

