#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
    int numDVDs;
    double total = 0.0;
    char current;

    std::cout << "How many DVDs are being rented? ";
    std::cin >> numDVDs;

    for (int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
    {
        if (dvdCount %3 == 0)
        {
            std::cout << "DVD #" << dvdCount << " is free!\n";
            continue;
        }
        std::cout << "Is DVD # " << dvdCount << " a current release? (Y/N)\n";
        std::cin >> current;
        if (toupper(current) == 'Y')
            total += 3.50;
        else
            total += 2.50;
    }
    std::cout << std::fixed << std::showpoint << std::setprecision(2)
              << "The total is $" << total << std::endl;
    return 0;
}

