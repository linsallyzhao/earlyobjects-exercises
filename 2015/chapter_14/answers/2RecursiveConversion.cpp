#include <iostream>

void sign(int);

int main()
{
    sign(3);
    return 0;
}

void sign(int n)
{
    if (n > 0)
    {
        std::cout << "No Parking\n";
        sign(n-1);
    }
}

