#include <string>
#include "linkedList.h"

using namespace std;

int main() {
    LinkedList<string> list;

    list.add("Alice");
    list.add("Chuck");
    list.add("Elaine");
    list.add("Fran");

    cout << "Here are the initial names:\n";
    list.displayList();
    cout << endl << endl;

    cout << "Now removing Elaine.\n\n";
    list.remove("Elaine");
    list.displayList();
    cout << endl << endl;

    return 0;
}
