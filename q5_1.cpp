#include <iostream>

using namespace std;

int main() {
    int chara;
    char dis;

    for ( chara = 32; chara <= 127; chara++) {
        if ((chara - 32) % 16 != 0) {
            dis = chara;
            cout << dis << " ";
        }
        else{
            dis = chara;
            cout << dis << endl;
        }
    }
    return 0;
}
