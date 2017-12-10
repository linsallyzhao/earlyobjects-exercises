#ifndef SEACHABLEVECTOR_H
#define SEACHABLEVECTOR_H

#include "ModiSearchable.h"

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
    this->sort();
    int size = this->size();
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (((*this))[middle] == item)
        {
            found = true;
            position = middle;
        }
        else if(((*this))[middle] > item)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}

#endif

