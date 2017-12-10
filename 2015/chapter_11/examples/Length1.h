#ifndef _LENGTH1_H
#define _LENGTH1_H
#include <iostream>

class Length
{
    private:
        int len_inches;
    public:
        Length(int feet, int inches)
        {
            setLength(feet, inches);
        }
        Length(int inches) { len_inches = inches; }
        int getFeet() const {return len_inches / 12;}
        int getInches() const { return len_inches % 12; }
        void setLength(int feet, int inches)
        {
            len_inches = 12 * feet + inches;
        }

        friend Length operator+(Length a, Length b);
        friend Length operator-(Length a, Length b);
        friend bool operator< (Length a, Length b);
        friend bool operator== (Length a, Length b);
        Length operator++();
        Length operator++(int);

        friend std::ostream &operator<< (std::ostream &out, Length a);
        friend std::istream &operator>> (std::istream &in, Length &a);

};
#endif