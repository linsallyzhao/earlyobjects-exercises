#ifndef SORTEDNUMBERLIST_H
#define SORTEDNUMBERLIDT_H
#include "numberList.cpp"

class SortedNumberList :public NumberList {
    public:
        void add(double number);
};
#endif

void SortedNumberList::add(double number) {
    ListNode *nodePtr, *previousNodePtr;

    if(head == NULL || head->value >= number)
        head = new ListNode(number, head);

    else {
        previousNodePtr = head;
        nodePtr = head->next;
        while(nodePtr != NULL && nodePtr->value < number) {
            previousNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        previousNodePtr->next = new ListNode(number, nodePtr);
        
    }
}




