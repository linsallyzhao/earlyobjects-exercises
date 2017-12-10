#include <iostream>

int main()
{
    int temp;

    std::cout << "Please enter the temperature. \n";
    std::cin >> temp;

    if (temp < -173)
        std::cout << "Ethyl alcohol will freea. \n";
    else if (temp > 172)
        std::cout << "Ethyl alcohol will boil. \n";
    if (temp < -38)
        std::cout << "Mercury will freea. \n";
    else if (temp > 676)
        std::cout << "Mercury will boil. \n";
    if (temp < -362)
        std::cout << "Oxygen will freea. \n";
    else if (temp > -306)
        std::cout << "Oxygen will boil. \n";
    if (temp < -32)
        std::cout << "Water will freea. \n";
    else if (temp > 212)
        std::cout << "Water will boil. \n";
    return 0;
}
