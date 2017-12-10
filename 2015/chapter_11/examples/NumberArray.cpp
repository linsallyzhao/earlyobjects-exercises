#include <iostream>
#include "NumberArray.h"

NumberArray::NumberArray(int size, double value)
{
    arraySize = size;
    aPtr = new double[arraySize];
    setValue(value);
}

void NumberArray::setValue(double value)
{
    for (int index = 0; index < arraySize; index++)
    {
        aPtr[index] = value;
    }

}

void NumberArray::print() const
{
    for (int index = 0; index < arraySize; index++)
        std::cout << aPtr[index] << "   ";
}
