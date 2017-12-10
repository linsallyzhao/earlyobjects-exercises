#include <iostream>

int main()
{
    int dia, slices, numPeople, slicesPerPizza, pizzas;
    const double PI = 3.14,
                 UNIT = 14.125;
    double area;

    std::cout << "How big do you want your pizza? \n";
    std::cin >> dia;
    std::cin.ignore(100, '\n');
    std::cout << "How many guests will you have? \n";
    std::cin >> numPeople;
    std::cin.ignore(100, '\n');
    
    area = PI * dia * dia / 4;
    slicesPerPizza = area / UNIT;
    pizzas = numPeople * 4 / slicesPerPizza + 1;

    std::cout << "You need " << pizzas << " pizzas. \n";

    return 0;
}


