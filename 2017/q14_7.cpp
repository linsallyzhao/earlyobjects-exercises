#include <string>
#include <iostream>

using namespace std;
void reverPrint (string &str, int size);
int main() {
    string test;
    cout << "Please enter a string: \n";
    getline(cin, test);

    reverPrint (test, test.length());

    return 0;
}

void reverPrint (string &str, int size) {
    if (size == 1){ 
        cout << str[0];
    }
    else if (size > 1){
        cout << str[size - 1];
        reverPrint(str, size - 1);
    }
}
