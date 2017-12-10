#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream outputFile;
    std::string name1, name2, name3;

    outputFile.open("Friends.txt");

    std::cout << "Enter the names of three friends. \n";
    std::cout << "Friend #1: ";
    std::cin >> name1;
    std::cout << "Friend #2: ";
    std::cin >> name2;
    std::cout << "Friend #3: ";
    std::cin >> name3;

    outputFile << name1 << std::endl
               << name2 << std::endl
               << name3 << std::endl;

    outputFile.close();

    std::cout << "The names were saved to a file. \n";
    return 0;
}
