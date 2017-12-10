#include <iostream>
#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
    private:
        double *aPtr;
        int arraySize;
    public:
        NumberArray(int size, double value);
        //~NumberArray() {if (arraySize > 0) delete [] aPtr;}
        void print() const;
        void setValue(double value);
};

#endif
