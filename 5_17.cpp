#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outputFile;
    string name1, name2, name3;

    outputFile.open("Friends.txt");

    cout << "Enter the names of three friends.\n";
    cout << "Friend #1: ";
    getline(cin, name1);
    cout << "Friend #2: ";
    getline(cin, name2);
    cout << "Friend #3: ";
    getline(cin, name3);

    outputFile << name1 << endl << name2 << endl << name3 << endl;

    outputFile.close();

    cout << "Saved!";
    return 0;
}
