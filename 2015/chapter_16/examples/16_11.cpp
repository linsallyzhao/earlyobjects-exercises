#include <iostream>
#include "SimpleVector.h"

int main()
{
    const int SIZE = 10;

    SimpleVector<int> intTable(SIZE);
    SimpleVector<double> doubleTable(SIZE);

    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = (x * 2);
        doubleTable[x] = (x * 2.14);
    }

    std::cout << "These values are in intTable:\n";
    intTable.print();
    std::cout << "These valurs are in doubleTable:\n";
    doubleTable.print();

    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = intTable[x] + 5;
        doubleTable[x] = doubleTable[x] + 1.5;
    }

    std::cout << "These values are in intTable:\n";
    intTable.print();
    std::cout << "These valurs are in doubleTable:\n";
    doubleTable.print();

    for (int x = 0; x < SIZE; x++)
    {
        intTable[x]++;
        doubleTable[x]++;
    }

    std::cout << "These values are in intTable:\n";
    intTable.print();
    std::cout << "These valurs are in doubleTable:\n";
    doubleTable.print();
    std::cout << std::endl;

    return 0;
}
