#include <iostream>
#include <fstream>

using namespace std;

int main () {
    fstream input;
    input.open("modified.txt", ios::in);
    
    int count = 0;
    char ch = input.get();
    while (ch != EOF) {
        if (ch == '\n')
            count++;
        ch = input.get();
    }
    input.clear();
    input.seekg(0L, ios::beg);
    if (count <= 10) {
        cout << "The whole file will get printed:\n";
        ch = input.get();
        while (ch != EOF) {
            cout << ch;
            ch = input.get();
        }
    } else {
        int find = 0;
        while (find < (count - 10)) {
            if (input.get() == '\n')
                find++;
        }
        ch = input.get();
        while (ch != EOF) {
            cout << ch;
            ch = input.get();
        }
    }
    return 0;
}
