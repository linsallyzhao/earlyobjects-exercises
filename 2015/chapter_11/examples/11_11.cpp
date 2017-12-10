#include <iostream>
#include "Length1.h"

int main()
{
    Length first(0), second(1, 9), c(0);
    std::cout << "Demonstrating prefix ++ operator and output operator.\n";
    for (int count = 0; count < 4; count++)
    {
        first = ++second;
        std::cout << "First: " << first << ". Second: " << second << ".\n";
    }
    std::cout << "\nDemonstrating postfix ++ operator and output operator.\n";
    for (int count = 0; count < 4; count++)
    {
        first = second++;
        std::cout << "First: " << first << ". Second: " << second << ". \n";
    }

    std::cout << "\nDemonstrating input and output operators. \n";
    std::cin >> c;
    std::cout << "You entered " << c << ". " << std::endl;

    return 0;
}
