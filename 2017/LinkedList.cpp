#include <iostream>
#include "LinkedList.h"

LinkedList::ListNode *LinkedList::copyList(ListNode *aList) {
    if (aList == NULL) 
        return NULL;
    else {
        ListNode *tail = copyList(aList->next);
        return new ListNode (aList->value, tail);
    }
}

void LinkedList::destroyList(ListNode *aList) {
    if (aList != NULL) {
        ListNode *tail = aList->next;
        delete aList;
        destroyList(aList->next);
    }
}

LinkedList::LinkedList (const LinkedList &list) {
    head = copyList(list.head);
}

void LinkedList::add(double num) {
    if (head == NULL)
        head = new ListNode(num);
    else {
        ListNode *ptr = head;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new ListNode(num);
    }
}

bool LinkedList::isMember(double num) {
    bool mem = false;
    ListNode *ptr = head;
    if (head == NULL)
        return mem;

    else {
        while(ptr->value != num && ptr->next != NULL) {
            ptr = ptr->next;
        }
        if (ptr->value == num)
            mem = true;
    }

    return mem;
}

bool LinkedList::reMember(ListNode *aList, double num) {
    ListNode *ptr = aList;
    if (aList == NULL){
        return false;
    }
    if (aList->value == num) {
        return true;
    }
    else { 
        return reMember(aList->next, num);
    }
}

LinkedList::ListNode *LinkedList::reRemove(ListNode *aList, double num) {
    if(aList != NULL && aList->value == num) {
        ListNode *ptr = aList->next;
        delete aList;
        return ptr;
    }
    if(aList != NULL && aList->value != num) {
        aList->next = reRemove(aList->next, num);
    }
    return aList;

}

void LinkedList::reverse() {
    ListNode * newHead = NULL;
    if (head != NULL){
        newHead = new ListNode(head->value);
        ListNode *ptr = head->next;
        while (ptr != NULL) {
            newHead = new ListNode(ptr->value, newHead);
            ptr = ptr->next;
        }
    }
    head = newHead; 
}

void LinkedList::print() const{
    ListNode *ptr = head;
    while(ptr != NULL) {
        std::cout << ptr->value << "  ";
        ptr = ptr->next;
    }
    std::cout << std::endl;

}


int LinkedList::search(double num) {
    int pos = -1;
    int currentPosition = 0;
    if (head != NULL) {
        ListNode *ptr = head;
        while(ptr != NULL && ptr->value != num) {
            currentPosition++;
            ptr = ptr->next;
        }
        if (ptr != NULL && ptr->value == num)
            pos = currentPosition;
    }
    return pos;
}

void LinkedList::insert(double num, int pos) {
    if (pos == 0) 
        head = new ListNode(num, head);
    else if (head != NULL){
        ListNode *ptr = head->next;
        ListNode *previous = head;
        int currentPosition = 1;
        while (currentPosition < pos){
            previous = ptr;
            ptr = ptr->next;
            currentPosition++;
        }
        ptr = new ListNode(num, ptr);
        previous->next = ptr;

    }
}

void LinkedList::removePosition(int pos) {
    if (pos == 0) {
        ListNode *aNode = head;
        head = head->next;
        delete aNode;
    }
    else if (head != NULL) {
        ListNode *ptr = head->next;
        ListNode *previous = head;
        int currentPosition = 1;
        while (currentPosition < pos){
            previous = ptr;
            ptr = ptr->next;
            currentPosition++;
        }
        previous->next = ptr->next;
        delete ptr;
    }
}
            
void LinkedList::sort() {
    bool swap;
    if(head != NULL) {  
        do {
            swap = false;
            ListNode *ptr = head->next;
            ListNode *previous = head;
            if(ptr != NULL  && (ptr->value < previous->value)) {
                previous->next = ptr->next;
                ptr->next = previous;
                head = ptr;
                swap = true;
            }
            ListNode *prePre = previous;
            previous = ptr;
            ptr = ptr->next;
            while(ptr != NULL ) {
                if (ptr->value < previous->value) {
                    previous->next = ptr->next;
                    ptr->next = previous;
                    prePre->next = ptr;        
                    swap = true;
                } 
                prePre = previous;
                previous = ptr;
                ptr = ptr->next;
            }

        } while(swap);
    }
}
