#include "numberList.cpp"

class ReliableList : public NumberList {
    public:
        ReliableList (const ReliableList & original);
        ReliableList () {}
        ReliableList& operator=(ReliableList right);

    private:
        static ListNode *copyList(ListNode *aList);
        static void destroyList(ListNode *aList);
};

ReliableList::ReliableList(const ReliableList &original) {
    head = copyList(original.head);
}

ReliableList &ReliableList::operator= (ReliableList right) {
    destroyList(head);
    head = copyList(right.head);
}

NumberList::ListNode* ReliableList::copyList(ListNode *aList) {
    if (aList == NULL)
        return NULL;
    else {
        ListNode *tailCopy = copyList(aList->next);
        return new ListNode(aList->value, tailCopy);
    }
}

void ReliableList::destroyList(ListNode *aList) {
    if (aList != NULL) {
        ListNode *tail = aList->next;
        delete aList;
        destroyList(tail);
    }
}
