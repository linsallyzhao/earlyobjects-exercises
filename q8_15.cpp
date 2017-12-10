#include <iostream>
#include <iomanip>
#include <string>
#include "BinManager.h"

using namespace std;

void displayMenu();
void displayReport( BinManager &bins);

int main() {
    string names[10] = {" ", "regular pliers", "n.nose ploers", "screwdriver", 
                      "p. head screw driver", "wrench-large", "wrench-small",
                      "drill", "cordless drill", "hand saw"};

    int quant[10] = {0, 25, 5, 25, 6, 7, 18, 51, 16, 12};
    BinManager bins(10, names, quant);

    displayMenu();
    int choice;
    cin >> choice;
    int item;
    int num;
    string useSearch;
    while (choice >= 1 && choice <= 3) {
        switch (choice) {
            case 1: cout << "which item do you want to add? 1 to 9\n";
                    cin >> item;
                    cout << "How many?\n";
                    cin >> num;
                    if(bins.addParts(item, num)) 
                        cout << "added\n";
                    else
                        cout << "Invalid\n";
                    cout << "enter the name of item: \n";
                    cin.ignore();
                    getline(cin, useSearch);
                    cout << "How many?\n";
                    cin >> num;
                    if(bins.addParts(useSearch, num))
                        cout << "added\n";
                    else
                        cout << "Invalid\n";
                    break;
            case 2: cout << "Which item do you want to remove? (1 to 9)\n";
                    cin >> item;
                    cout << "How many?\n";
                    cin >> num;

                    if(bins.removeParts(item, num)) 
                        cout << "removed\n";
                    else
                        cout <<"Too many!\n";

                    cout << "enter the name of item: \n";
                    cin.ignore();
                    getline(cin, useSearch);
                    cout << "How many?\n";
                    cin >> num;
                    if(bins.removeParts(useSearch, num))
                        cout << "removed\n";
                    else
                        cout << "Invalid\n";
                    break;
            case 3: displayReport(bins);
                    break;
        }

        displayMenu();
        cin >> choice;
    }
    displayReport(bins);
        
    return 0;
}


void displayMenu() {
    cout << "1. Add parts to a bin\n";
    cout << "2. Remove parts to a bin\n";
    cout << "3. Display a report\n";
    cout << "Any other number to quit\n";
}

void displayReport( BinManager &bins) {

    for (int count = 1; count < 10; count++) {
        cout << setw(20) << bins.getDescription(count) << ":" << setw(4) 
             << bins.getQuantity(count) << endl;
    }
}
