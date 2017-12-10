#include <iostream>

int main()
{
    const float DISCOUNT = 0.15;
    float price, save, due_amount;

    std::cout << "Please enter your purchase price. ";
    std::cin >> price;

    save = price * DISCOUNT;
    due_amount = price - save;

    std::cout << "You save $" << save << std::endl
              << "You need to pay $" << due_amount << std::endl;

    return 0;
}
