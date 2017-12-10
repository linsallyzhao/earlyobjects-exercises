#include <iostream>
#include <cmath>

int main()
{
    for (int line = -3; line <= 3; line++)
    {
        char pre;
        if (line != 0)
            pre = ' ';
        else
            pre = '+';
        for (int head = 1; head <= 6; head++)
            std::cout << pre;
        for (int plus = 1; plus <= std::abs((std::abs(line) -3)) * 2 + 1; plus++)
            std::cout << "+";
        std::cout << std::endl;
    }
    return 0;
}

