#include <iostream>
#include <fstream>

using namespace std;
const int DESC_SIZE = 31, NUM_RECORDS = 5;

struct Invtry {
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main() {
    Invtry record = {"", 0, 0.0};
    fstream inventory("invtry.dat", ios::out | ios::binary);
    if(!inventory) {
        cout << "Error opening file.";
        return 0;
    }

    for (int count = 0; count < NUM_RECORDS; count++) {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
    }

    inventory.close();
    return 0;
}
