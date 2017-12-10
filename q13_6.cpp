#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    fstream input, output;
    input.open("testin.txt", ios::in);
    output.open("testout.txt", ios::out);

    char ch;
    ch = input.get();
    ch = toupper(ch);
    output << ch;
    ch = input.get();
    while (ch != EOF) {
        if (ch == '.') {
            output << ch;
            ch = input.get();
            while (!isalpha(ch) && ch != EOF) {
                output << ch;
                ch = input.get();
            }
            ch = toupper(ch);
            output << ch;
            ch = input.get();
        } else {
            ch = tolower(ch);
            output << ch;
            ch = input.get();
        }
    }
    
    input.close();
    output.close();
    return 0;
}

