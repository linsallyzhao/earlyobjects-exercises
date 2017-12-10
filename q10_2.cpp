#include <iostream>
#include <string>
#include "StudentList.h"

using namespace std;

int main() {
    string *names, tempName;
    int *tests, tempScore;
    int count;

    cout << "How many student do you have?\n";
    cin >> count;

    names = new string [count];
    tests = new int [count];

    for (int i = 0; i < count; i++) {
        cout << "Please enter student name:  ";
        cin.ignore();
        getline(cin, tempName);
        cout << "Please enter his/her score:  ";
        cin >> tempScore;
        names[i] = tempName;
        tests[i] = tempScore;
    }

    StudentList students(names, tests, count);
    students.display();

    cout << "The average score is " << students.getAverage() << endl;

    return 0;
}

    
