#include <iostream>

void anotherFunction();
int num = 2;

int main()
{
    std::cout << "In main, num is " << num << std::endl;
    anotherFunction();
    std::cout << "Back in main, num is " << num << std::endl;
    return 0;
}

void anotherFunction()
{
    std::cout << "In anotherFunction, num is " << num << std::endl;
    num = 50;
    std::cout << "But, it is now changed to " << num << std::endl;
}

