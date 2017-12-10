#include <iostream>
#include <string>
#include "Heading.h"

int main()
{
    Heading newRep("Kitty Home", "Dinner Report");
    newRep.print();

    Heading bor;
    bor.print();
    
    return 0;
}
