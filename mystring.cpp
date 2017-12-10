#include "mystring.h"

MyString::MyString(const char *sptr) {
    len = strlen(sptr);
    str = new char[len + 1];
    strcpy(str, sptr);
}

MyString::MyString(const MyString &right) {
    str = new char[right.len + 1];
    strcpy(str, right.str);
    len = right.len;
}

MyString MyString::operator= (MyString right) {
    if (len != 0)
        delete []str;
        str = new char[right.len + 1];
        strcpy(str, right.str);
        len = right.len;
        return *this;
}

MyString MyString::operator+= (MyString right) {
    char *temp = str;
    str = new char[len + right.len + 1];
    strcpy(str, temp);
    strcat(str, right.str);
    if (len != 0) delete [] temp;
    len += right.len;
    return *this;
}

bool operator== (MyString left, MyString right) {
    return strcmp(left.str, right.str) == 0;
}

bool operator!= (MyString left, MyString right) {
    return strcmp(left.str, right.str) != 0;
}

bool operator> (MyString left, MyString right) {
    return strcmp(left.str, right.str) > 0;
}

bool operator< (MyString left, MyString right) {
    return strcmp(left.str, right.str) < 0;
}

bool operator<= (MyString left, MyString right) {
    return strcmp(left.str, right.str) <= 0;
}

bool operator>= (MyString left, MyString right) {
    return strcmp(left.str, right.str) >= 0;
}

ostream &operator<< (ostream &strm, MyString obj) {
    strm << obj.str;
    return strm;
}

istream &operator>> (istream &strm, MyString  &obj) {
    char buffer[SIZE];
    strm.getline(buffer, SIZE);
    obj = buffer;
    return strm;
}
