#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
void rotateLeft(vector <T> &vect);
template <class T>
void output(vector<T> vect);
template <class T>
void reverseVect(vector<T> &vect);

int main()  {
    vector<char> vChar;
    char a;
    for (int i = 65; i < 75; i++) {
        a = i;
        vChar.push_back(a);
    }
    cout << "This is the original char vector:\n";
    output(vChar);
    for (int count = 0; count < 10; count++) {
        rotateLeft(vChar);
        output(vChar);
    }

    cout << endl;

    vector<int> vInt;
    for (int c = 0; c < 10; c++) {
        vInt.push_back(c);
    }
    cout << "This is the original int vector:\n";
    output(vInt);
    for (int c = 0; c < 10; c++) {
        rotateLeft(vInt);
        output(vInt);
    }
    cout << endl;
    cout << "And this is the reverse:\n";
    reverseVect(vInt);
    output(vInt);

    cout << endl;
    vector<double> vDou;
    for (int x = 0; x < 10; x++) {
        vDou.push_back(x * 2.37);
    }
    cout << "This is the original double vector:\n";
    output(vDou);
    for (int x = 0; x < 10; x++) {
        rotateLeft(vDou);
        output(vDou);
    }
    cout << endl;

    vector<string> vStr;
    vStr.push_back("This is");
    vStr.push_back(" a test ");
    vStr.push_back(" string ");

    cout << "This is the original string vector:\n";
    output(vStr);
    for (int index = 0; index < 3; index++) {
        rotateLeft(vStr);
        output(vStr);
    }
    cout << endl;

    return 0;
}



template <class T>
void rotateLeft(vector <T> &vect) {
    T temp;
    typename vector<T>::iterator iter = vect.begin();
    temp = *iter;
    vect.erase(iter);
    vect.push_back(temp);
}

template <class T>
void output(vector<T> vect) {
    cout << endl;
    for (int count = 0; count < vect.size(); count++) {
        cout << vect[count] << "  " ;
    }
    cout << endl;
}
template <class T>
void reverseVect(vector<T> &vect) {
    reverse(vect.begin(), vect.end());
}
