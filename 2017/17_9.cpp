#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    list<int>::iterator iter;

    for (int x = 0; x < 100; x += 10) {
        myList.push_back(x);
    }
    for (iter = myList.begin(); iter != myList.end(); iter++) 
        cout << *iter << "  ";
    cout << endl;

    myList.reverse();

    for (iter = myList.begin(); iter != myList.end(); iter++) 
        cout << *iter << "  ";
    cout << endl;

    return 0;
}
