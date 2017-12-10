#include <iostream>
#include "SearchVect.h"

int main()
{
    const int SIZE = 10;
    SearchableVector<int> intTable(SIZE);
    SearchableVector<double> doubleTable(SIZE);

    for (int x = 0; x < SIZE; x++)
    {
        intTable[x] = (x * 2);
        doubleTable[x] = (x * 2.14);
    }

    std::cout << "These values are in intTable:\n";
    intTable.print();
    std::cout << "These values are in doubleTable:\n";
    doubleTable.print();
    std::cout << std::endl;

    int result;
    std::cout << "Searching for 6 in intTable.\n";
    result = intTable.findItem(6);
    if (result == -1)
        std::cout << "6 was not found in intTable.\n";
    else
        std::cout << "6 was found at subscript "
                  << result << std::endl;

    std::cout << "Searching for 12.84 in doubleTable.\n";
    result = doubleTable.findItem(12.84);
    if (result == -1)
        std::cout << "12.84 was not found in doubleTable.\n";
    else
        std::cout << "12.84 was found at subscript "
                  << result << std::endl;

    return 0;
}
