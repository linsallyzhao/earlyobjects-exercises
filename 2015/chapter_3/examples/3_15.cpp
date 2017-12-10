#include <iostream>
#include <iomanip>

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837,
        num4 = 34, num5 = 7, num6 = 1623,
        num7 = 390, num8 = 3456, num9 = 12;

    std::cout << std::setw(6) << num1 << std::setw(6) << num2 << std::setw(6) << num3 << std::endl;
    std::cout << std::setw(6) << num4 << std::setw(6) << num5 << std::setw(6) << num6 << std::endl;
    std::cout << std::setw(6) << num7 << std::setw(6) << num8 << std::setw(6) << num9 << std::endl;

    return 0;
}
