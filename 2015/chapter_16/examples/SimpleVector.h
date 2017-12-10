#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <cstdlib>

template <class T>
class SimpleVector
{
    private:
        T *aptr;
        int arraySize;
        void subError() const;

    public:
        SimpleVector(int);
        SimpleVector(const SimpleVector &);
        ~SimpleVector();
        int size() const
        {
            return arraySize;
        }

        T &operator[](int);
        void print() const;
};

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    aptr = new T[s];
    for (int count = 0; count < arraySize; count++)
        aptr[count] = T();
}

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    arraySize = obj.arraySize;
    aptr = new T [arraySize];
    for (int count = 0; count < arraySize; count++)
        aptr[count] = obj[count];
}

template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete [] aptr;
}

template <class T>
void SimpleVector<T>::subError() const
{
    std::cout << "ERROR: Subscript out of range.\n";
    exit(0);
}

template <class T>
T &SimpleVector<T>::operator[](int sub)
{
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

template <class T>
void SimpleVector<T>::print() const
{
    for (int k = 0; k < arraySize; k++)
        std::cout << aptr[k] << " ";
    std::cout << std::endl;
}

#endif

