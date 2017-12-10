#include <iostream>

class Example
{
    int x;
public:
    Example(int a) {x = a;}
    void setValue(int);
    void printAddressAndValue();
};

void Example::setValue(int a)
{
    x = a;
}

void Example::printAddressAndValue()
{
    std::cout << "The object at address " << this << " has " 
              << "value " << (*this).x << std::endl;
}

int main()
{
    Example ob1(10), ob2(20);
    std::cout << "Addresses of objects are " << &ob1 << " and "
              << &ob2 << std::endl;

    ob1.printAddressAndValue();
    ob2.printAddressAndValue();

    return 0;
}

