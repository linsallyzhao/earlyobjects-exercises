#include <iostream>

int main()
{
    int x = 25;
    int *ptr;
    ptr = &x;
    std::cout << "The value in x is " << x << std::endl;
    std::cout << "The address of x is " << ptr << std::endl;

    return 0;
}
