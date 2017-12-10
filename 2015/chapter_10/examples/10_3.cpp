#include <iostream>

int main()
{
    int x = 25;
    int* ptr;

    ptr = &x;

    std::cout << "Here is the value in x, printed twice:\n"
              << x << "     " << *ptr << std::endl;

    *ptr = 100;

    std::cout << "Once again, here is the value in x: \n"
              << x << "     " << *ptr << std::endl;
    return 0;
}
