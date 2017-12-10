#include <iostream>

int main()
{
    const int PENNY = 1,
              NICKEL = 5,
              DIME = 10,
              QUARTER = 25;

    int pen, nick, dime, quar, total;

    std::cout << "Please enter the number of pennies. \n";
    std::cin >> pen;
    std::cout << "Please enter the number of nickels. \n";
    std::cin >> nick;
    std::cout << "Please enter the number of dimes. \n";
    std::cin >> dime;
    std::cout << "Please enter the number of quarters. \n";
    std::cin >> quar;

    total = pen * PENNY + nick * NICKEL + dime * DIME + quar * QUARTER;

    if (total == 100)
        std::cout << "Congrats! That's exact one dollar. \n";
    else if (total < 100)
        std::cout << "That's less than one dollar. \n";
    else
        std::cout << "I can give you one dollar for those. \n";

    return 0;
}

    
