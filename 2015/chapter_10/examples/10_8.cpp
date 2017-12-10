#include <iostream>
#include <iomanip>

int main()
{
    const int NUM_COINS = 5;

    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr;

    doublePtr = coins;

    std::cout << std::setprecision(2);
    std::cout << "Here are the values in the coins array: \n";
    for (int count = 0; count < NUM_COINS; count++)
    {
        doublePtr = &coins[count];
        std::cout << *doublePtr << "  ";
    }

    std::cout << std::endl;
    return 0;
}
