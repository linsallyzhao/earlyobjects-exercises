#include <iostream>

void deeper()
{
    std::cout << "I am now inside the function deeper. \n";
}

void deep()
{
    std::cout << "I am now inside the function deep. \n";
    deeper();
    std::cout << "Now I am back in deep. \n";
}

int main()
{
    std::cout << "I am starting in function main. \n";
    deep();
    std::cout << "Back in function main again. \n";
    return 0;
}

