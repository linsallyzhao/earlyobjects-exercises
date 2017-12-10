#include <iostream>
#include "Convert.h"

IntClass f(int intValue)
{
    return intValue;
}

void  printValue(IntClass x)
{
    std::cout << x.getValue();
}
