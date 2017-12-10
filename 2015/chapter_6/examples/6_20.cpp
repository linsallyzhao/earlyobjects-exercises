#include <iostream>

void showLocal();

int main()
{
    showLocal();
    showLocal();
    return 0;
}

void showLocal()
{
    int localNum = 5;

    std::cout << "localNum is " << localNum << std::endl;
    localNum = 99;
}

