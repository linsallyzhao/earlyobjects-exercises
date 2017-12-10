#include <iostream>

void changeMe(int aValue);

int main()
{
    int number = 12;

    std::cout << "In main number is " << number << std::endl;

    changeMe(number);

    std::cout << "Back in main again, number is still " << number << std::endl;
    return 0;
}

void changeMe(int myValue)
{
    myValue = 0;

    std::cout << "In changeMe, the value has been changed to "
              << myValue << std::endl;
}
