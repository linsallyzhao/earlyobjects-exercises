#include <iostream>
#include <string>

using namespace std;

void replaceSubstring(string str1, string str2, string &str3);

int main() {
    string string1, string2, string3;

    cout << "Please enter the sentence:\n";
    getline(cin, string3);
    cout << "Which word do you want to search?\n";
    getline(cin, string1);
    cout << "And you wnat to change it to:\n";
    getline(cin, string2);

    replaceSubstring(string1, string2, string3);
    cout << string3 << endl;


    return 0;
}

void replaceSubstring(string str1, string str2, string &str3) {
    int pos = 0;
    do {
        pos = str3.find(str1, pos);
        if (pos != string::npos) {
            str3.replace(pos, str1.length(), str2);
        }
    } while (pos != string::npos );

}


