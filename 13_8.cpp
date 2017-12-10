#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {    
    string fileName;
    fstream file;
    char ch;

    cout << "Enter a file name: ";
    cin >> fileName;

    file.open(fileName.c_str(), ios::in);
    if (!file) {
        cout << fileName << " could not be opened.\n";
        return 1;
    }

    ch = file.get();
    while (ch != EOF) {
        cout << ch;
        ch = file.get();
    }

    file.close();
    return 0;
}

