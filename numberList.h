#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <iostream>
using namespace std;

class NumberList {
    protected:
        struct ListNode {
            double value;
            ListNode *next;
            ListNode (double value1, ListNode *next1 = NULL) {
                value = value1;
                next = next1;
            }
        };
        ListNode *head;
    public:
        NumberList() {head = NULL;}
        ~NumberList();
        void add(double number);
        void remove(double number);
        void displayList() const;

};

#endif
