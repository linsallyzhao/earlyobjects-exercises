#include <iostream>

int main()
{
    double num1, num2;

    std::cout << "Please enter a number \n";
    std::cin >> num1;

    std::cout << "Please enter another number \n";
    std::cin >> num2;

    if (num1 > num2)
        std::cout << "Number one is greater than number two. \n";
    else if (num1 < num2)
        std::cout << "Number two is greater than number one. \n";
    else
        std::cout << "They equal to each other. \n";

    return 0;
}
