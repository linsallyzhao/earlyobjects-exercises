#include <iostream>
#ifndef NUMBERARRAY2_H
#define NUMBERARRAY2_H

class NumberArray
{
    private:
        double *aPtr;
        int arraySize;
    public:
        NumberArray(NumberArray &obj);
        NumberArray(int size, double value);
        ~NumberArray() {if (arraySize > 0) delete [] aPtr;}
        void print() const;
        void setValue(double value);
};

#endif
