#include <iostream>

int main()
{
    char ch;

    std::cout << "This program has paused. Press Enter to continue. ";
    std::cin.get(ch);

    std::cout << "It has paused a second time. Please press enter again. ";
    ch = std::cin.get();

    std::cout << "It has paused a third time. Please press Enter again. ";
    std::cin.get();

    std::cout << "Thank you! \n";

    return 0;
}
