#include "ModiSimpleVector.h"
#include <iostream>

int main()
{
    SimpleVector<int> test(10);
    for (int index = 0; index < 11; index++)
    {
        try
        {
            test.push_back(index);
        }
        catch(int)
        {
            std::cout << "Out of Boundary!\n";
        }
    }
    for (int index = 0; index < 5; index++)
        std::cout << test.pop_back() << std::endl;

    return 0;
}
