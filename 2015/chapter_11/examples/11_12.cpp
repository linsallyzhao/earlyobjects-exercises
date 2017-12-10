#include <iostream>
#include <string>

int main()
{
    std::string name = "William";

    std::cout << "Here are the letters in your name: \n";
    for (int index = 0; index < name.length(); index++)
        std::cout << name[index] << " ";

    std::cout << "\nEnter a character and press enter: ";
    std::cin >> name[2];
    std::cout << "Now, here are the letters in your name:\n";
    for (int index = 0; index < name.length(); index++)
        std::cout << name[index] << " ";

    return 0;
}
