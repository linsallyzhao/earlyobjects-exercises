#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {    
    const int NUM_DIGITS = 5;
    int win[NUM_DIGITS];
    int user[NUM_DIGITS];
    srand(time(0));
    int count = 0;
    int index;

    for (index = 0; index < NUM_DIGITS; index++) {
        win[index] = rand() % 10;
        cout << "please enter you choice #" << (index + 1) << " :";
        cin >> user[index];
        if (user[index] == win[index])
            count++;
    }
    cout << "The winning pick: \n";
    for (index = 0; index < NUM_DIGITS; index++) {
        cout << win[index] << " ";
    }
    cout << endl;

    cout << "The user pick: \n";
    for (index = 0; index < NUM_DIGITS; index++) {
        cout << user[index] << " ";
    }
    cout << endl;

    cout << "There are " << count << " matched digits." << endl;

    return 0;
}

    

