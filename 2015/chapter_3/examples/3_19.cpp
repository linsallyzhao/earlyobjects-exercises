#include <iostream>
#include <iomanip>

int main()
{
    double x = 6.0;

    std::cout << x << std::endl;
    std::cout << std::showpoint << x << std::endl;
    std::cout << std::setprecision(2) << x << std::endl;
    std::cout << std::fixed << x << std::endl;

    return 0;
}
