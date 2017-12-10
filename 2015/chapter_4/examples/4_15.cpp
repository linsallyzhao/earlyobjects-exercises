#include <iostream>
#include <cctype>

int main()
{
    std::cout << "IS \'?\' an alphabetic character? " << isalpha('?') << "\n";
    std::cout << "IS \'X\' an alphabetic character? " << isalpha('X') << "\n";
    std::cout << "IS \'x\' an alphabetic character? " << isalpha('x') << "\n\n";

    std::cout << "Ask if (isalpha('X') == true) \n";
    if (isalpha('X') == true)
        std::cout << "The letter X IS an alphabetic character. \n\n";
    else
        std::cout << "The letter X is NOT an alphabetic character. \n\n";

    std::cout << "Ask if (isalpha('X')) \n";
    if (isalpha('X'))
        std::cout << "The letter X IS an alphabetic character. \n\n";
    else
        std::cout << "The letter X is NOT an alphabetic character. \n\n";

    return 0;
}

