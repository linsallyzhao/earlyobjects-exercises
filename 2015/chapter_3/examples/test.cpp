#include <iostream>

int main()
{
    char letter;

    std::cout << "The ASCII values of uppercase letters are "
              << static_cast<int>('A') << " - "
              << static_cast<int>('Z') << std::endl;

    std::cout << "The ASCII values of lowercase letters are "
              << static_cast<int>('a') << " - "
              << static_cast<int>('z') << std::endl;

    std::cout << "Enter a letter and I will tell you its ASCII code: \n";
    std::cin >> letter;
    std::cout << "The ASCII code for " << letter << " is "
              << static_cast<int>(letter) << std::endl;

    return 0;
}
