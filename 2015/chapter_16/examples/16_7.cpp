#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    char firstChar, secondChar;
    std::cout << "Entere two characters: ";
    std::cin >> firstChar >> secondChar;

    std::swap(firstChar, secondChar);
    std::cout << firstChar << " " << secondChar << std::endl;

    int firstInt, secondInt;
    std::cout << "Enter two integers: ";
    std::cin >> firstInt >> secondInt;
    std::swap(firstInt, secondInt);
    std::cout << firstInt << " " << secondInt << std::endl;

    std::string firstString, secondString;
    std::cout << "Enter two strings: ";
    std::cin >> firstString >> secondString;
    std::swap(firstString, secondString);
    std::cout << firstString << " " << secondString << std::endl;

    return 0;
}
