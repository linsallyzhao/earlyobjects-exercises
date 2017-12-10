#include <iostream>
#include "IntRange2.h"

int main()
{
    IntRange2 range(5, 10);
    int userValue;

    std::cout << "Enter a value in the range 5 - 10:\n";
    try
    {
        userValue = range.getInput();
        std::cout << "You entered " << userValue << std::endl;
    }
    catch (IntRange2::TooLow)
    {
        std::cout << "That value is too low.\n";
    }
    catch (IntRange2::TooHigh)
    {
        std::cout << "That value is too high.\n";
    }
    std::cout << "End of the program.\n";

    return 0;
}
