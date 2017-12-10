#include <iostream>

int main()
{
    bool trueValue, falseValue;
    int x = 5, y = 10;

    trueValue = (x < y);
    falseValue = (y == x);

    std::cout << "True is " << trueValue << std::endl;
    std::cout << "False is " << falseValue << std::endl;

    return  0;
}
