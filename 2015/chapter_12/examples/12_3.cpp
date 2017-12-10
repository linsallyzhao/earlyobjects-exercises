#include <iostream>

int main()
{
    const int NAME_LENGTH = 50;
    char *pname;

    pname = new char[NAME_LENGTH];

    std::cout << "Enter your name: ";
    std::cin.getline(pname, NAME_LENGTH);
    std::cout << "Hello " << pname;
    return 0;
}
