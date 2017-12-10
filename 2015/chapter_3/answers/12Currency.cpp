#include <iostream>

int main()
{
    const float YEN_PER_DOLLAR = 119.19,
                EUROS_PER_DOLLAR = 0.88;

    float yen, dollar, euro;

    std::cout << "How much do you have in U.S. dollar? ";
    std::cin >> dollar;

    yen = dollar * YEN_PER_DOLLAR;
    euro = dollar * EUROS_PER_DOLLAR;

    std::cout << "You can change it into " << yen << " Japanese yen. \n"
              << "Or you can change it into " << euro << " Euro. ";

    return 0;

}

