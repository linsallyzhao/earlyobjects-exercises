#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;
template<class T>
class LinkedList {
    protected:
        struct ListNode {
            T value;
            ListNode *next;
            ListNode (T value1, ListNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        ListNode * head;
    public:
        LinkedList() {head = NULL; }
        ~LinkedList();
        void add(T value);
        void remove(T value);
        void displayList() const;
};
#endif

template <class T>
void LinkedList<T>::add(T value) {
    if (head == NULL) {
        head = new ListNode(value);
    } 
    else {
        ListNode *nodePtr = head;
        while(nodePtr->next != NULL)
            nodePtr = nodePtr->next;

        nodePtr->next = new ListNode(value);
    }
}

template<class T>
void LinkedList<T>::displayList() const {
    ListNode *nodePtr = head;
    while(nodePtr) {
        cout << nodePtr->value << "  ";
        nodePtr = nodePtr->next;
    }
}


template<class T>
LinkedList<T>::~LinkedList() {
    ListNode *nodePtr = head;
    while (nodePtr != NULL) {
        ListNode *garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}

template<class T>
void LinkedList<T>::remove(T number) {
    ListNode *nodePtr, *previousNodePtr;
    if (!head)
        return;

    if(head->value == number) {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
    }
    else {
        nodePtr = head;
        while (nodePtr != NULL && nodePtr->value != number) {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr) {
            previousNodePtr->next = nodePtr->next;
            delete nodePtr;
        }
    }
}


