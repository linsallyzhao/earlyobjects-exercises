#include "intarray.h"
#include <cstdlib>

IntArray::IntArray(int s)
{
    arraySize = s;
    aptr = new int [s];
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = 0;
}

IntArray::IntArray(const IntArray &obj)
{
    arraySize = obj.arraySize;
    aptr = new int[arraySize];
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

IntArray::~IntArray()
{
    if (arraySize > 0)
        delete [] aptr;
}

void IntArray::subError() const
{
    std::cout << "ERROR: Subscript out of range. \n";
    exit(0);
}

int &IntArray::operator[](int sub) const
{
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

