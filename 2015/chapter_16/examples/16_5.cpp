#include <iostream>
#include <cstdlib>
#include <new>

int main()
{
    int *p;
    try
    {
        p = new int[2];
        p[0] = 10;
        p[1] = 20;
    }
    catch(std::bad_alloc)
    {
        std::cout << "Memory cannot be allocated.\n";
        exit(1);
    }
    std::cout << p[0] << " " << p[1] << std::endl;

    return 0;
}
