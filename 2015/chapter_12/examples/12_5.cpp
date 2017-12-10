#include <iostream>
#include <cstring>

int main()
{
    const int LENGTH = 40;
    char firstString[LENGTH], secondString[LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(firstString, LENGTH);
    std::cout << "Enter another string: ";
    std::cin.getline(secondString, LENGTH);

    if (strcmp(firstString, secondString) == 0)
        std::cout << "You entered the same string twice.\n";
    else
        std::cout << "The strings are not the same. \n";
    return 0;
}

