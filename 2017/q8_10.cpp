#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Stats.h"

using namespace std;

void getData(Stats &toput);
void createReport (ofstream &output, Stats &info);

int main() {
    Stats times;
    getData(times);

    string name;
    cout << "Where do you want to save the data report?\n";
    cin.ignore();
    getline(cin, name);
    ofstream outputFile;
    outputFile.open(name.c_str());

    createReport(outputFile, times);

    return 0;
}


void getData(Stats &toput) {
    double temp;
    cout << "Please enter a time:\n";
    cin >> temp;

    while(temp != 0) {
        if (toput.storeValue(temp)) {
            cout << "Data saved\nPlease enter another:\n";
            cin >>temp;
        }else
        cout << "Too many data!\n";
    }

}


void createReport (ofstream &output, Stats &info) {
    output << fixed << showpoint << setprecision(2);
    output << "REPORT\n\n";
    output << "Average 100 yard-dash time: " << info.average() << " seconds\n";
    output << "Slowest runner: #" << (info.highIn() + 1) << "   " 
           << info.getOneTime(info.highIn()) << " seconds\n";
    output << "Fastest runner: #" << (info.lowIn() + 1) << "   " 
           << info.getOneTime(info.lowIn()) << " seconds\n";
    
}
