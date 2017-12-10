#include <iostream>
#include "overload.h"

void NumberArray::operator=(const NumberArray &right)
{
    if (arraySize > 0) delete [] aPtr;
    arraySize = right.arraySize;
    aPtr = new double [arraySize];
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = right.aPtr[index];
}


NumberArray::NumberArray(const NumberArray &obj)
{
    arraySize = obj.arraySize;
    aPtr = new double[arraySize];
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = obj.aPtr[index];
}

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
