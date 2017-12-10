#include <iostream>

int main()
{
    int x = 25,
        y = 50,
        z = 75;
    int *ptr;

    std::cout << "Here are the values of x, y, and z:\n"
              << x << "     " << y << "     " << z << std::endl;

    ptr = &x;
    *ptr *= 2;

    ptr = &y;
    *ptr *=2;

    ptr = &z;
    *ptr *= 2;

    std::cout << "Once again, here are the values "
              << " of x, y, and z: \n"
              << x << "     " << y << "     " << z << std::endl;

    return 0;
}
