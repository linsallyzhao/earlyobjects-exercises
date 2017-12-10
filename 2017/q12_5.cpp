#include <iostream>
#include <cstring>

using namespace std;

int main() {    
    const int SHORT = 20;
    const int LONG = 80;

    char first[SHORT], mid[SHORT], last[SHORT], all[LONG];
    cout << "Please enter you first name: \n";
    cin.getline(first, SHORT);
    cout << "Please enter your middle name: \n";
    cin.getline(mid, SHORT);
    cout << "Please enter your last name: \n";
    cin.getline(last, SHORT);

    strcat(all, last);
    strcat(all, ", ");
    strcat(all, first);
    strcat(all, " ");
    strcat(all, mid);

    cout << "Your name is " << all << endl;

    return 0;
}
