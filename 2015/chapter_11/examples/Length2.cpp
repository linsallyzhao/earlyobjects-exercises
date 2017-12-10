#include "Length2.h"

Length::operator double() const
{
    return len_inches / 12 + (len_inches % 12) / 12.0;
}


std::ostream &operator<< (std::ostream &out, Length a)
{
    out << a.getFeet() << " feet, " << a.getInches() << " inches";
    return out;
}


