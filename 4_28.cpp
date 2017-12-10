#include <iostream>
using namespace std;

enum Roster {Tom = 1, Sharon, Bill, Teresa, John};

int main() {
    int who;

    cout << "This program will give you a student's birthday. \n";
    cout << "Whose birthday do you want to know?\n";
    cout << "1 = Tom \n";
    cout << "2 = Sharon \n";
    cout << "3 = Bill \n";
    cout << "4 = Teresa \n";
    cout << "5 = John \n";
    cin >> who;

    switch (who)
    {
        case Tom :    cout << "Tom's birthday.\n";
                      break;
        case Sharon : cout << "Sharon's birthday.\n";
                      break;
        case Bill :   cout << "Bill's birthday.\n";
                      break;
        case Teresa : cout << "Teresa's birthday.\n";
                      break;
        case John :   cout << "John's birthday.\n";
                      break;
        default     : cout << "\nInvalid selection\n";
    }

    return 0;
}

