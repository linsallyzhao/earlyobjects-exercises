#include <iostream>
#include <cstdlib>

int main()
{
    unsigned seed;

    std::cout << "Enter a seed value: ";
    std::cin >> seed;

    std::srand(seed);

    std::cout << std::rand() << "     "
              << std::rand() << "     "
              << std::rand() << std::endl;

    return 0;
}
