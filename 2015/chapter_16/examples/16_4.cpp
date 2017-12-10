#include <iostream>
#include "IntRange3.h"

int main()
{
    IntRange3 range(5, 10);
    int userValue;

    std::cout << "Enter a value in the range 5 - 10:\n";
    try
    {
        userValue = range.getInput();
        std::cout << "You entered " << userValue << std::endl;
    }
    catch (IntRange3::OutOfRange ex)
    {
        std::cout << "That value " << ex.value
                  << " is out of range.\n";
    }
    std::cout << "End of the program.\n";

    return 0;
}
