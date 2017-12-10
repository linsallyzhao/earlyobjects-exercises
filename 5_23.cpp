#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    string fileName;
    double number;

    cout << "Enter the file name:\n";
    cin >> fileName;
    inputFile.open(fileName.c_str());

    while (inputFile.fail()) {
        cout << "Invalid file name. Try agin, please\n";
        cin >> fileName;
        inputFile.open(fileName.c_str());
    }
    while (inputFile >> number)
        cout << number << endl;

    inputFile.close();

    return 0;
}
