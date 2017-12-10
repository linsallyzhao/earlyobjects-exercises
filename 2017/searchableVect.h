#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "simpleVector.cpp"

template<class T>
class SearchableVector : public SimpleVector<T> {
    public:
        SearchableVector(int s) : SimpleVector<T>(s) {}
        SearchableVector(SearchableVector &obj) : SimpleVector<T>(obj) {}
        SearchableVector(SimpleVector<T> &obj) : SimpleVector<T>(obj) {}
        int findItem(T);
};

template<class T>
int SearchableVector<T>::findItem(T item) {
    for (int count = 0; count < this->size(); count++) {
        if(this->operator[](count) == item) 
            return count;
    }
    return -1;
}

#endif
