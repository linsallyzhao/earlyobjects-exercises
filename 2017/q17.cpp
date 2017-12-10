#include "LinkedList.cpp"

using namespace std;

int main() {    
    LinkedList list;
    list.add(3.4);
    list.add(4.5);
    list.add(5.6);
    cout <<"Check print\n";
    list.print();

    if(list.isMember(3.4))
        cout << "3.4 is a member of the list\n";
    if (!list.isMember(9))
        cout << "9 is not a member of the list\n";
    LinkedList other(list);
    cout << "Check copy constructor\n";
    other.print();
    
    if(list.recurMember(5.6))
        cout << "5.6 is a member of the list and recur isMember works\n";
    if(!list.recurMember(8.9))
        cout << "8.9 is not a member and check recur isMember\n";

    list.add(7.9);
    list.add(10);
    cout << "Added another two and print\n";
    list.print();

    cout << "Check remove \n";
    list.remove(10);
    list.print();

    cout << "Check remove \n";
    list.remove(5.6);
    list.print();

    cout << "Check remove \n";
    list.remove(18);
    list.print();

    cout << "Check reverse\n";
    list.reverse();
    list.print();
    
    list.add(89);
    list.add(30);
    cout << "Added another two and print\n";
    list.print();
    
    int searchResult = list.search(89);
    if (searchResult == -1)
        cout << "There is no such number in the list\n";
    else 
        cout << "89 is at position " << searchResult << endl;

    searchResult = list.search(70);
    if (searchResult == -1)
        cout << "There is no such number in the list\n";
    else 
        cout << "70 is at position " << searchResult << endl;

    cout << "test insert pos 7.7 at 0\n";
    list.insert(7.7, 0);
    list.print();

    cout << "test insert pos 7.8 at 1\n";
    list.insert(7.8, 1);
    list.print();
    
    cout << "test remove pos 0\n";
    list.removePosition(0);
    list.print();

    cout << "test remove pos 2\n";
    list.removePosition(2);
    list.print();

    cout << "test sort \n";
    list.sort();
    list.print();

    return 0;
}
