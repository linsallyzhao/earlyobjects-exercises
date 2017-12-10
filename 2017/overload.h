#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <iostream>
using namespace std;

class NumberArray {
    private:
        double *aPtr;
        int arraySize;
    public:
        void operator= (const NumberArray &right);

        NumberArray(const NumberArray &);
        NumberArray(int size, double value);
        ~NumberArray() { if (arraySize > 0 ) delete [] aPtr; aPtr = 0; }
        void print() const;
        void setValue(double value);
};

#endif
