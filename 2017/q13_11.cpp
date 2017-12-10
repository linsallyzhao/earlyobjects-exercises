#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream store;
    int list[100] = {};
    int newList[101] = {};
    int temp;
    int count = 0;
    store.open("intList", ios::in | ios::out | ios::binary);
    if (!store) {
        cout << "Problem opening file!\n";
        return 1;
    }
    store.read(reinterpret_cast<char *>(&temp), sizeof(temp));
    while (!store.eof()) {
        cout << temp << "  " ;
        list[count] = temp;
        count++;
        store.read(reinterpret_cast<char *>(&temp), sizeof(temp));
    }

    cout << "\nHere is the current list in file. Please input one more:\n";
    cin >> temp;
    if (count > 0) {
        for (int i = 0; i < count; i++) 
            newList[i] = list[i];
    }
    int pos = count;
    if (pos == 0 || temp < list[count - 1]){
        newList[pos] = temp;
    }
    else {
        while (pos > 0 && temp > list[pos - 1] ) {
            pos--;
        }
        if (pos > 1) {
        for (int newCount = 0; newCount < pos - 1; newCount++) 
            newList[newCount] = list[newCount];
        newList[pos -1] = temp;
        for (int newCount = pos; newCount < count + 1; newCount++)
            newList[newCount] = list[newCount - 1];
        } else if (pos == 0) {
            newList[0] = temp;
            for (int i = 1; i < count + 1; i++) {
                newList[i] = list[i - 1];
            }
        } else if (pos == 1) {
            newList[0] = list[0];
            newList[1] = temp;
            for (int i = 2; i < count + 1; i++) {
                newList[i] = list[i - 1];
            }
        }
    }
    for (int i = 0; i < (count + 1); i++) {
        cout << newList[i] << " " ;
    }
    cout << endl;
    store.clear();
    store.seekp(0L, ios::beg);
    store.write(reinterpret_cast<char *>(newList), sizeof(temp) * (count + 1));
    store.close();
    return 0;
}


