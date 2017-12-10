#include <iostream>

void displayValue(int num);

int main()
{
    std::cout << "I am passing several values to displayValue. \n";
    displayValue(5);
    displayValue(10);
    displayValue(2);
    displayValue(16);
    std::cout << "Now I am back in main. \n";
    return 0;
}

void displayValue(int num)
{
    std::cout << "The value is " << num << std::endl;
}

