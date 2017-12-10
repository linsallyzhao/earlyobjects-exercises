#include "Length.h"

Length operator+(Length a, Length b)
{
    return Length(a.len_inches + b.len_inches);
}

Length operator-(Length a, Length b)
{
    return Length(a.len_inches - b.len_inches);
}

bool operator==(Length a, Length b)
{
    return a.len_inches == b.len_inches;
}

bool operator< (Length a, Length b)
{
    return a.len_inches < b.len_inches;
}

