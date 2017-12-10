#include "numberList.h"
using namespace std;

void NumberList::add(double number) {
    if (head == NULL) {
        head = new ListNode(number);
    } 
    else {
        ListNode *nodePtr = head;
        while(nodePtr->next != NULL)
            nodePtr = nodePtr->next;

        nodePtr->next = new ListNode(number);
    }
}

void NumberList::displayList() const {
    ListNode *nodePtr = head;
    while(nodePtr) {
        cout << nodePtr->value << "  ";
        nodePtr = nodePtr->next;
    }
}

NumberList::~NumberList() {
    ListNode *nodePtr = head;
    while (nodePtr != NULL) {
        ListNode *garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}

void NumberList::remove(double number) {
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


            
