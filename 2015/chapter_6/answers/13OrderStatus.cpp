#include <iostream>

void getInfo(int &order, int &stock, char &ship);
void status(int order, int stock, int ship = 10);

int main()
{
    int order, stock, shipPrice;
    char ship;
    getInfo(order, stock, ship);
    if (ship == 'n' || ship == 'N')
        status(order, stock, 0);
    else
        status(order, stock);
    return 0;
}
void getInfo(int &order, int &stock, char &ship)
{
    std::cout << "Number of order and number of spools in stock?\n";
    std::cin >> order >> stock;
    std::cout << "Do your need ship?(Y/N)\n";
    std::cin >> ship;
    while (order < 0 || stock < 0)
    {
        std::cout << "Your input is invalid. Try again.\n";
        std::cout << "Number of order and number of spools in stock?\n";
        std::cin >> order >> stock;
    }
}
void status(int order, int stock, int ship)
{
    if (order < stock)
    {
        std::cout << "The whole order is ready to ship.\n"
                  << "Price is $" << order * 100 << std::endl
                  << "Shiping charge is $" << ship * order << std::endl
                  << "Total cost is $" << (100 + ship) * order << std::endl;
    }
    else
    {
        std::cout << stock << " of " << order << " is ready to ship.\n"
                  << "We need to backorder " << (order - stock) << " spools.\n"
                  << "Price for " << stock << " spools is $" << stock * 100 << std::endl
                  << "Shipping charging is $" << ship * stock << std::endl
                  << "Total cost is $" << (ship + 100) * stock << std::endl;
    }
}



    


