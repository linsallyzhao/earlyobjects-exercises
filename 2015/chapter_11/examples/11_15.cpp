#include "Length2.h"

#include <iostream>
#include <string>

int main()
{
    Length distance(0);
    double feet;
    int inches;
    distance.setLength(4, 6);
    std::cout << "The Length object is " << distance << "." << std::endl;

    feet = distance;
    inches = distance;
    std::cout << "The length object measures " << feet << " feet.\n";
    std::cout << "The length object measures " << inches << " inches.\n";

    return 0;
}

