#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int SIZE = 256;
class MyString {
private:
    char *str;
    int len;
public:
    MyString() {str = new char[1]; str[0] = '\0'; len = 0;}
    MyString(const char* );
    MyString(const MyString &);

    ~MyString() {if (len != 0) delete []str; }

    int length() const {return len;}
    char *date() {return str; }
    MyString operator+= (MyString);
    MyString operator= (MyString);

    friend bool operator== (MyString, MyString);
    friend bool operator!= (MyString, MyString);
    friend bool operator> (MyString, MyString);
    friend bool operator< (MyString, MyString);
    friend bool operator>= (MyString, MyString);
    friend bool operator<= (MyString, MyString);
    friend ostream & operator<< (ostream &, MyString );
    friend istream & operator>> (istream &, MyString &);
};

#endif
    

