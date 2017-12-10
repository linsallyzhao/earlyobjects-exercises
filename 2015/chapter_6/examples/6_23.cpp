#include <iostream>

void doubleNum(int &refVar);

int main()
{
    int value = 4;

    std::cout << "In main, value is " << value << std::endl;
    std::cout << "Now calling doubleNum..." << std::endl;
    doubleNum(value);
    std::cout << "Now back in main, value is " << value << std::endl;
    return 0;
}

void doubleNum(int &refVar)
{
    refVar *= 2;
}
