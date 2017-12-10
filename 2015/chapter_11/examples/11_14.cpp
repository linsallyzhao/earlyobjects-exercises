#include <iostream>
#include "intarray.h"

int main()
{
    IntArray table(10);

    for (int x = 0; x < table.size(); x++)
        table[x] = x;
    for (int x = 0; x < table.size(); x++)
        std::cout << table[x] << " ";
    std::cout << std::endl;

    std::cout << "Attempting to strore outside the array bounds: ";
    table[table.size()] = 0;

    return 0;
}

