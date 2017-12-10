#include <iostream>
#include <iomanip>

int main()
{
    int inBat,
        hit;

    float rate;

    std::cout << "Please enter the time in bat and the hits he got \n";
    std::cin >> inBat >> hit;

    rate = hit / static_cast<float>(inBat);
    std::cout << "The batting average is " 
              << std::fixed << std::setprecision(4)
              << rate << std::endl;

    return 0;
}

