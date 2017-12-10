#include <iostream>
#include <iomanip>

int main()
{
    int num = 1;

    std::cout << "Number    Square\n";
    std::cout << "----------------\n";
    while (num <= 5)
    {
        std::cout << std::setw(4) << num << std::setw(7) << (num * num) << std::endl;
        num++;
    }
    return 0;
}
