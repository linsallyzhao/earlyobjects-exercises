#include <iostream>

int main()
{
    int intNumber;
    double floatNumber;

    std::cout << "Input a number. ";
    std::cin >> intNumber;
    std::cout << "Input a second number. \n";
    std::cin >> floatNumber;

    std::cout << "You entered: " << intNumber
              << " and " << floatNumber << std::endl;

    return 0;
}
