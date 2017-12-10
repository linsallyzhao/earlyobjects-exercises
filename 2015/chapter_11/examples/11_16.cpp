#include "Convert.h"
#include <iostream>

void printValue(IntClass);
IntClass f(int);

int main()
{
    IntClass intObject = 23;
    std::cout << "The value is " << intObject.getValue() << std::endl;
    intObject = 24;
    std::cout << "The value is " << intObject.getValue() << std::endl;
    std::cout << "The valeu is ";
    printValue(25);
    std::cout << std::endl;

    intObject = f(26);
    std::cout << "The valeu is ";
    printValue(intObject);

    return 0;
}
