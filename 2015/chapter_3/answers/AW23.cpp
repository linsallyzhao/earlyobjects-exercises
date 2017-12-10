#include <iostream>

int main()
{
    float max, used, available;

    std::cout << "Please enter your max credit and the amount your used. ";
    std::cin >> max >> used;

    available = max - used;

    std::cout << "Your current available credit is " << available << std::endl;

    return 0;
}
