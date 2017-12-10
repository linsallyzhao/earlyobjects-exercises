#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    unsigned seed;
    seed = std::time(0);
    std::srand(seed);

    std::cout << std::rand() << "     "
              << std::rand() << "     "
              << std::rand() << std::endl;

    return 0;

}

