#include <iostream>
#include "overload.h"
using namespace std;

void NumberArray::operator= (const NumberArray &right) {    
    if (arraySize > 0) delete [] aPtr;

    arraySize = right.arraySize;
    /*
     * So in the copy constructor, it got passed a object of the same class by
     * reference, does that give it the access to the private member in another
     * object? Or the only thing that matters is that the code is part of the
     * class? Which means as long as the code is in the class, it can directlyl
     * access any private member of any obj? */
    aPtr = new double[arraySize];
    for (int index = 0; index < arraySize; index++) 
        aPtr[index] = right.aPtr[index];
}

NumberArray::NumberArray(const NumberArray &obj) {
    arraySize = obj.arraySize;
    aPtr = new double[arraySize];
    for (int index = 0; index < arraySize; index++) 
        aPtr[index] = obj.aPtr[index];
}

NumberArray::NumberArray(int size1, double value) {
    arraySize = size1;
    aPtr = new double [arraySize];
    setValue(value);
}

void NumberArray::setValue (double value) {
    for (int index = 0; index < arraySize; index++) 
        aPtr[index] = value;
}

void NumberArray::print() const {
    for (int index = 0; index < arraySize; index++) 
        cout << aPtr[index] << " ";
}
