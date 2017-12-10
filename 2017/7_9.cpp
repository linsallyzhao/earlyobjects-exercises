#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class InventoryItem {

private: 
    int partNum;
    string description;
    int onHand;
    double price;

public:
    void storeInfo(int p, string d, int oH, double cost);
    int getPartNum() const {
        return partNum;
    }

    string getDescription() const {
        return description;
    }

    int getOnHand() const {
        return onHand;
    }

    double getPrice() const {
        return price;
    }
};

void InventoryItem::storeInfo(int p, string d, int oH, double cost) {
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

InventoryItem storeValues ();
void showValues (const InventoryItem &);

int main() {
    InventoryItem part = storeValues();

    showValues (part);
    return 0;
}

InventoryItem storeValues () {
    InventoryItem part;
    int partNum;
    string description;
    int qty;
    double price;

    cout << "New part number:\n";
    cin >> partNum;
    cout << "Description\n";
    cin.get();
    getline(cin, description);
    cout << "How many on hand?\n";
    cin >> qty;
    cout << "Price\n";
    cin >> price;

    part.storeInfo(partNum, description, qty, price);
    return part;
}

void showValues(const InventoryItem &item) {
    cout << fixed << showpoint << setprecision(2);

    cout << "Part number    : " << item.getPartNum() << endl;
    cout << "Description    : " << item.getDescription() << endl;
    cout << "Units On Hand  : " << item.getOnHand() << endl;
    cout << "Price          : " << item.getPrice() << endl;
}
