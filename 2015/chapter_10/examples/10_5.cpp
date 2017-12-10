#include <iostream>

int main()
{
    short numbers[] = {10, 20l, 30, 40, 50};

    std::cout << "The first element of the aray is "
              << *numbers << std::endl;
    return 0;
}
