#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int space = 6;

    for (int line = 1; line <= 7; line++) {
        if (line == 4) 
            cout << "+++++++++++++";
        else if (line < 4) {
            cout << "      ";
            for (int row = 1; row <= line * 2 - 1; row++)
                cout << "+";
        }else if(line > 4) {
            cout << "      ";
            for (int row = 1; row <= (8 - line) * 2 - 1; row++)
                cout << "+";
        }
        cout << endl;
    }

    return 0;
}
