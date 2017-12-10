#ifndef SIMPLEVECTOR_H 
#define SIMPLEVECTOR_H

#include <iostream>

using namespace std;

template <class T>
class SimpleVector {
    private:
        T *aptr;
        int arraySize;
        void subError() const;
    public:
        SimpleVector() {
            aptr = 0; arraySize = 0;
        }
        SimpleVector(int);
        SimpleVector(const  SimpleVector&);
        ~SimpleVector();

        int size() const {return arraySize; }
        T &operator[] (int) const;
        void printer() const;
       
};

#endif


