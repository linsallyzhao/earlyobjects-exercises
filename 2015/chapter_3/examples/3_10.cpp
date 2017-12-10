#include <iostream>

int main()
{
    short intVal = 32767;

    float floatVal = 3.0E-47;

    std::cout << "Original value of intVar is " << intVal << std::endl;

    intVal = intVal + 1;
    std::cout << "intVar after overflow is " << intVal << std::endl;

    intVal = intVal - 1;
    std::cout << "intvar after second overflow is " << intVal << std::endl;

    std::cout << "Value of very tiny floatVar: " << floatVal;

    return 0;

}
