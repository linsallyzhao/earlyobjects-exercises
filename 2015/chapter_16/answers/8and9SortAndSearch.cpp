#include "ModiSearchVector.h"
#include <iostream>
#include <cmath>

int main()
{
    SearchableVector<int> test(10);
    for (int index = 0; index < 10; index++)
        test[index] = pow((-1), index) * index;
    test.print();
    test.sort();
    test.print();
    std::cout << "The -5 is at position " << test.findItem(-5);

    return 0;
}


