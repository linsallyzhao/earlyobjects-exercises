#include <iostream>

int main()
{
    int countUp = 1;
    while (countUp < 6)
    {
        std::cout << countUp << "   ";
        countUp++;
    }
    std::cout << std::endl << std::endl;

    int countDown = 5;
    while (countDown > 0)
    {
        std::cout << countDown << "     ";
        countDown--;
    }
    return 0;
}
