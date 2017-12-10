#include <iostream>
#include <cstring>

int main()
{
    const int NAME_LENGTH = 30;
    char name1[NAME_LENGTH], name2[NAME_LENGTH];

    std::cout << "Enter a name (last name first): ";
    std::cin.getline(name1, NAME_LENGTH);
    std::cout << "Enter another naem: ";
    std::cin.getline(name2, NAME_LENGTH);
    std::cout << "Here are the names sorted alphabetically:\n";
    if (strcmp(name1, name2) < 0)
        std::cout << name1 << std::endl << name2 << std::endl;
    else if(strcmp(name1, name2) > 0)
        std::cout << name2 << std::endl << name1 << std::endl;
    else
        std::cout << "You entered the same name twice!\n";

    return 0;
}

