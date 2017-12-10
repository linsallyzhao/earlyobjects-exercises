#include <iostream>

int main()
{
    const int SIZE = 12;
    char name[SIZE];

    std::cout << "Please enter your first name: ";
    std::cin >> name;
    std::cout << "Hello, " << name <<std::endl;

    return 0;
}
