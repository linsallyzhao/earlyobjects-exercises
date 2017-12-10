#include <iostream>
#include <fstream>

using namespace std;

struct ListNode {
    double value;
    ListNode *next;

    ListNode (double value1, ListNode *next1 = NULL) {
        value = value1;
        next = next1;
    }
};

int main() {
    double number;
    ListNode *numberList = NULL;

    ifstream numberFile("numbers.dat");
    if(!numberFile) {
        cout << "Error opening the file of numbers.";
        exit(1);
    }

    cout << "The contents of the file are: " << endl;
    while(numberFile >> number) {
        cout << number << "  " ;
        numberList = new ListNode(number, numberList);
    }

    cout << endl << "The contents of the list are: \n";
    ListNode *ptr = numberList;
    while(ptr != NULL) {
        cout << ptr->value << "  ";
        ptr = ptr->next;
    }

    return 0;
}
