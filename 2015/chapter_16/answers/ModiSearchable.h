#ifndef MODISIMPLEVECTOR_H
#define MODISIMPLEVECTOR_H

#include <iostream>
#include <cstdlib>

template <class T>
class SimpleVector
{
    private:
        T *aptr;
        int arraySize;
        int currentPos;
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
        void push_back(T value);
        T pop_back();
        void sort();
};

template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    currentPos = 0;
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
    currentPos = arraySize;
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

template <class T>
void SimpleVector<T>::push_back(T value)
{
    if (currentPos == arraySize)
        throw int();
    else
    {
        aptr[currentPos] = value;
        currentPos++;
    }
}

template <class T>
T SimpleVector<T>::pop_back()
{
    T temp = aptr[currentPos - 1];
    aptr[currentPos - 1] = T();
    currentPos--;
    return temp;
}
template <class T>
void SimpleVector<T>::sort()
{
    int startScan, minIndex;
    T minValue;

    for (startScan = 0; startScan < (arraySize - 1); startScan++)
    {
        minIndex = startScan;
        minValue = aptr[startScan];
        for (int index = startScan + 1; index < arraySize; index++)
        {
            if (aptr[index] < minValue)
            {
                minValue = aptr[index];
                minIndex = index;
            }
        }
        aptr[minIndex] = aptr[startScan];
        aptr[startScan] = minValue;
    }
}
#endif

