#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

using namespace std;

class IntArray {
    private:
        int *aptr;
        int arraySize;
        void subError() const;
    public:
        IntArray(int);
        IntArray(const IntArray &);
        ~IntArray();

        int size() const {return arraySize; }
        int &operator[] (int) const;
       
};

#endif


