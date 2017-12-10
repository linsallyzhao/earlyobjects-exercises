#include "ReliableNumberList.h"
int main() { 
    ReliableList squareList, cubeList;
    for (int k = 1; k <= 5; k++) {
        squareList.add(k * k);
        cubeList.add(k * k * k);
    }

    ReliableList otherList(squareList);
    cout << "Result of the copy constructor is:\n";
    otherList.displayList();
    cout << endl;

    otherList = cubeList;
    cout << "Result of assignment is : \n";
    otherList.displayList();
    cout << endl;

    return 0;
}
