#include <iostream>

void first()
{
    std::cout << "I am now inside the function first. \n";
}

void second()
{
    std::cout << "I am now inside the function second. \n";
}

int main()
{
    std::cout << "I am starting in function main. \n";
    first();
    second();
    std::cout << "Back in function main again. \n";
    return 0;
}

