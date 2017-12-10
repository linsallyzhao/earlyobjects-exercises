#include <iostream>
#include <fstream>

using namespace std;

const int DESC_SIZE = 31;

struct Invtry {
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()  {
    Invtry record;

    fstream inventory("invtry.dat", ios::in | ios::binary);
    if(!inventory) {
        cout << "Error in opening file.\n";
        return 0;
    }

    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    while(!inventory.fail()) {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    }

    inventory.close();
    return 0;
}

