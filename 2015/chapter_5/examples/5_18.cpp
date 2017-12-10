#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile;
    std::string name;

    inputFile.open("Friends.txt");

    std::cout << "Reading data from the fiel.\n";

    inputFile >> name;
    std::cout << name << std::endl;
    inputFile >> name;
    std::cout << name << std::endl;
    inputFile >> name;
    std::cout << name << std::endl;

    inputFile.close();
    return 0;
}


