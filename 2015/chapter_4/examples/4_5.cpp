#include <iostream>

int main()
{
    double result = .666667 * 6.0;

    std::cout << "result = " << result << std::endl;

    if (result == 4.0)
        std::cout << "result DOES equal 4! " << std::endl;
    else
        std::cout << "result DOES NOT equal 4! " << std::endl;

    return 0;
}
