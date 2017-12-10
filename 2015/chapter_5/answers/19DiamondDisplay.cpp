#include <iostream>
#include <cmath>

int main()
{
    for (int count = -3; count <= 3; count++)
    {
        for (int space = 1; space <= std::abs(count); space++)
            std::cout << " ";
        for (int plus = 1; plus <= std::abs((std::abs(count) - 3)) * 2 + 1; plus++)
            std::cout << "+";
        std::cout << std::endl;
    }
    return 0;
}

