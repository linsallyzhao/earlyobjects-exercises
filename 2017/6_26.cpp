#include <iostream>
#include <fstream>

using namespace std;

void readFile (ifstream &);

int main() {
    ifstream dataIn;

    dataIn.open("weather.dat");
    if (dataIn.fail())
        cout << "Error opening data file.\n";
    else {
        readFile (dataIn);
        dataIn.close();
    }

    return 0;
}

void readFile (ifstream &inFile) {
    int temp;
    
    while (inFile >> temp)
        cout << temp << " ";
    cout << endl;
}
