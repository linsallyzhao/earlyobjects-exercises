#include <iostream>

void anotherFunction();

int main()
{
    int num = 1;

    std::cout << "In main, num is " << num << std::endl;
    anotherFunction();
    std::cout << "Back in main, num is still " << num << std::endl;
    return 0;
}

void anotherFunction()
{
    int num = 20;

    std::cout << "In anotherFunction, num is " << num << std::endl;
}

