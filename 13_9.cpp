#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    char ch;
    int number;

    string fileName;
    fstream inFile, outFile;

    cout << "Input file is named : \n";
    cin >> fileName;
    inFile.open(fileName.c_str(), ios::in);
    if(!inFile) {
        cout << "Cannot open that file you dirty lier gave me wrong name!\n";
        return 1;
    }
    outFile.open("modified.txt", ios::out);
    if(!outFile) {
        cout << "Cannot open output file.\n";
        return 2;
    }

    ch = inFile.peek();
    while (ch != EOF) {
        if (isdigit(ch)) {
            inFile >> number;
            outFile << number + 1;
        } else {
            ch = inFile.get();
            outFile << ch;
        }

        ch = inFile.peek();
    }

    inFile.close();
    outFile.close();
    return 0;
}

