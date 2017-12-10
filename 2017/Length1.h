#ifndef _LENGTH1_H
#define _LENGTH1_H
#include <iostream>

using namespace std;

class Length {
    private:
        int len_inches;
    public:
        Length (int feet, int inches) {
            setLength(feet, inches);
        }

        Length(int inches) {len_inches = inches; }
        int getFeet() const {return len_inches /12; }
        int getInches() const {return len_inches % 12; }
        void setLength (int feet, int inches) {
            len_inches = feet * 12 + inches;
        }

        friend Length operator+ (Length a, Length b);
        friend Length operator- (Length a, Length b);
        friend bool operator< (Length a, Length b);
        friend bool operator== (Length a, Length b);
        Length operator++ ();
        Length operator++ (int);

        operator double () const;
        operator int() const {return len_inches;}

        friend ostream &operator<< (ostream &out, Length a);
        friend istream &operator>> (istream &in, Length &a);

};

#endif
