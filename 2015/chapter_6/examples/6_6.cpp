#include <iostream>

void displayValue(int num);

int main()
{
    std::cout << "I am passing 5 to displayValue. \n";
    displayValue(5);
    std::cout << "Now I am back in main. \n";
    return 0;
}

void displayValue(int num)
{
    std::cout << "The value is " << num << std::endl;
}

