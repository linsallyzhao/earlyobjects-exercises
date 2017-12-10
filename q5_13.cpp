#include <iostream>
#include <string>

using namespace std;

int main() {
    int numStudent;
    string name, max, min;

    cout << "How many students do you have?\n";
    cin >> numStudent;
    cin.ignore();

    while (numStudent < 1 || numStudent > 25) {
        cout << "Invalid number. Try again please:\n";
        cin >> numStudent;
        cin.ignore();
    }
    cout << "Please enter the first name:\n";
    getline(cin, name);
    max = name;
    min = name;
    for (int count = 1; count < numStudent; count++) {
        cout << "Please enter the next name\n";
        getline(cin, name);
        if (name > max)
            max = name;
        if (name < min)
            min = name;
    }

    cout << "The front of the line up is " << min << endl;
    cout << "The end of the line up is " << max << endl;

    return 0;
}
