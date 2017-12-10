#include <iostream>
#include "intarray.h"

int main()
{
    IntArray table(10);

    for (int x = 0; x < table.size(); x++)
        table[x] = (x * 2);

    for (int x = 0; x < table.size(); x++)
        std::cout << table[x] << "  ";
    std::cout << std::endl;

    for (int x = 0; x < table.size(); x++)
        table[x] = table[x] + 5;

    for (int x = 0; x < table.size(); x++)
        std::cout << table[x] << "  ";
    std::cout << std::endl;

    for (int x = 0; x < table.size(); x++)
        table[x]++;

    for (int x = 0; x < table.size(); x++)
        std::cout << table[x] << "  ";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << table.operator[](5); 
    return 0;
}


    
