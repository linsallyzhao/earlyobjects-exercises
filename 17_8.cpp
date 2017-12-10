#include "NumberList.cpp"

int main() {
    NumberList list;
    double number;
    list.add(23);
    list.add(17);
    list.add(59);
    cout << "The numbers of the list are:\n";
    list.displayList();
    cout << "\n";
    cout << "Enter a number to add:\n";
    cin >> number;
    list.add(number);
    cout << "The numbers of the list are:\n";
    list.displayList();
    cout << endl;
    cout << "Enter a number to remove:\n";
    cin >> number;
    list.remove(number);
    cout << "The numbers of the list are:\n";
    list.displayList();
    cout << endl;

    return 0;
}
