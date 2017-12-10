#include <iostream>
#include "Inventory.h"

using namespace std;

int main() {
    int inum, quant;
    double cost;

    cout << "Please enter the item number, quantityi and cost for a item: ";
    cin >> inum >> quant >> cost;

    while (inum < 0 || quant < 0 || cost < 0) {
        cout << "Invalid input. Try again\n";
        cin >> inum >> quant >> cost;
    }

    Inventory df;
    cout << "Total cost in df is " << df.getTotalCost() << endl;

    Inventory oneItem(inum, quant, cost);
    
    return 0;
}

