#include <iostream>
#include <string>
#include "Heading.h"

using namespace std;

int main() {
    string com, rep;
    cout << "Company name: ";
    getline(cin, com);
    cout << "Report name: ";
    getline(cin, rep);

    Heading repHead;
    repHead.printOneline();
    repHead.printBox();

    Heading anoHead(com, rep);
    anoHead.printOneline();
    anoHead.printBox();


    return 0;
}
