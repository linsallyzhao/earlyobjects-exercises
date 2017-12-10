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
        operator double() const;
        operator int () const {return len_inches; }

        friend std::ostream &operator<< (std::ostream &out, Length a);

};
#endif
