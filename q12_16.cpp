#include <iostream>
#include <string>

using namespace std;

string toPig(string );

int main() {
    string sentence;

    cout << "Please enter a sentence:\n";
    getline(cin, sentence);

    string modified = toPig(sentence);

    cout << modified << endl;

    return 0;
}

string toPig(string pig) {
    int index = 0;
    string temp;
    int pos;

    do {
        temp = pig[index];
        pig.erase(index, 1);//erase pig[index]
        pos = pig.find(' ', index);
        if (pos != string::npos) {
            pig.insert(pos, temp);
            pig.insert(pos + 1, "AY"); //append temp to pos, and append AY
            cout << pig << endl;
            index = pos + 4;
        } else {
            pig.append(temp);
            pig.append("AY");
            index = pig.length();
        }
    } while (index < pig.length());
    return pig;
}

