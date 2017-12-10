#include "numberList.cpp"
using namespace std;

int main() {
    NumberList list;

    list.add(2.5);
    list.add(7.9);
    list.add(12.6);

    cout << "Here are the initial values:\n";
    list.displayList();
    cout << endl << endl;

    cout << "Now removing the value in the middle.\n";
    list.remove(7.9);
    cout << "Here are the values left.\n";
    list.displayList();
    
    return 0;
}
