#include <iostream>

int main()
{
    char ch;

    std::cout << "Enter a digit or a letter: ";
    ch = std::cin.get();

    if (ch >= '0' && ch <= '9')
        std::cout << "You  entered a digit. \n";
    else if (ch >= 'A' && ch <= 'Z')
        std::cout << "You entered an uppercase letter. \n";
    else if (ch >= 'a' && ch <= 'z')
        std::cout << "You entered an lowercase letter. \n";
    else
        std::cout << "That is not a digit or a letter. \n";
    return 0;
}
