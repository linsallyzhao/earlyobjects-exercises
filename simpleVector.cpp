#include "simpleVector.h"
#include <cstdlib>

template <class T>
SimpleVector<T>::SimpleVector(int s) {
    arraySize = s;
    aptr = new T[arraySize];
    for (int count = 0; count < arraySize; count++) 
        *(aptr + count) = T(); 
}

template <class T>
SimpleVector<T>::SimpleVector (const SimpleVector &obj) {
    arraySize = obj.arraySize;
    aptr = new T [arraySize];
    for (int count = 0; count < arraySize; count++) 
        aptr[count] = obj.aptr[count]; // this will not call the overload []

}

template <class T>
SimpleVector<T>::~SimpleVector() {
    if (arraySize > 0 ){
        delete [] aptr;
        aptr = 0;
    }

}

template <class T>
void SimpleVector<T>::subError() const {
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}

template <class T>
T &SimpleVector<T>::operator[] (int sub) const {
    if (sub < 0 || sub >= arraySize) 
        subError();
    return aptr[sub];
}

template <class T>
void SimpleVector<T>::printer() const {
    for (int i = 0; i < arraySize; i++) {
        cout << aptr[i] << " ";
    }
    cout << endl;
}

