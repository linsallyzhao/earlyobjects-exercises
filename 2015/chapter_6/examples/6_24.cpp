#include <iostream>

void getNum(int &);
int doubleNum(int);

int main()
{
    int value;

    getNum(value);

    value = doubleNum(value);

    std::cout << "That value doubled is " << value << std::endl;
    return 0;
}
void getNum(int &userNum)
{
    std::cout << "Enter a number: \n";
    std::cin >> userNum;
}

int doubleNum(int number)
{
    return number * 2;
}
