#include <iostream>
#include <string>

int main()
{
    std::string name,
                city;

    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter the city you live in: ";
    std::getline(std::cin, city);

    std::cout << "Hello, " << name << std::endl
              << "You live in " << city << std::endl;

    return 0;
}
