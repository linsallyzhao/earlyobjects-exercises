#include <iostream>
#include <cmath>

int main()
{
    double result = .666667 * 6.0;

    std::cout << "result = " << result << std::endl;

    if (std::abs(result - 4.0) < .0001)
        std::cout << "result DOES equal 4! " << std::endl;
    else
        std::cout << "result DOES NOT equal 4! " << std::endl;

    return 0;
}
