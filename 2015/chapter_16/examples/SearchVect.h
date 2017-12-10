#ifndef SEACHABLEVECTOR_H
#define SEACHABLEVECTOR_H

#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
    public:
        SearchableVector(int s) : SimpleVector<T>(s)
    {}
        SearchableVector(SearchableVector &);
        SearchableVector(SimpleVector<T> &obj):
            SimpleVector<T>(obj)
    {}

        int findItem(T);
};

template <class T>
SearchableVector<T>::SearchableVector(SearchableVector &obj) :
    SimpleVector<T>(obj)
{
}

template <class T>
int SearchableVector<T>::findItem(T item)
{
    for (int count = 0; count < this->size(); count++)
    {
        if (this->operator[](count) == item)
            return count;
    }
    return -1;
}
#endif

