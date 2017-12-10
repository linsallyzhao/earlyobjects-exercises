#include <iostream>

void getNumber(int *);
void doubleValue(int *);

int main()
{
    int number;

    getNumber(&number);
    doubleValue(&number);

    std::cout << "That value doubled is " << number << std::endl;
    return 0;
}

void getNumber(int *input)
{
    std::cout << "Enter an integer number: ";
    std::cin >> *input;
}

void doubleValue(int *val)
{
    *val *= 2;
}


