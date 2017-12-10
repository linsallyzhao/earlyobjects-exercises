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
    long recNum;

    fstream inventory("invtry.dat", ios::in | ios::out | ios::binary);
    if(!inventory) {
        cout << "Error in opening file.\n";
        return 0;
    }
    
    cout << "Which record do you wnt to edit>\n";
    cin >> recNum;
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "Price: ";
    cout << record.price << endl << endl;
    cout << "Enter the new data:";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantiry: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    inventory.close();
    return 0;
}

