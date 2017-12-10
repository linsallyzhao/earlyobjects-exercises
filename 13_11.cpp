#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("nums.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file.\n";
        return 0;
    }

    int buffer[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(buffer) / sizeof(buffer[0]);

    cout << "Now writing the data to the file.\n";
    file.write(reinterpret_cast<char *>(buffer), sizeof(buffer));
    file.close();

    file.open("nums.dat", ios::in);
    if (!file) {
        cout << "Error opening file.\n";
        return 0;
    }

    cout << "Now reading it back :\n";
    int *back = new int[size];
    file.read(reinterpret_cast<char *>(back), sizeof(buffer));

    for (int count = 0; count < size; count++)
        cout << back[count] << " ";
    delete [] back;
    back = 0;
    file.close();
    return 0;
}
