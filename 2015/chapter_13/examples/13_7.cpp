#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string input;

    std::fstream dataFile("addresses.txt", std::ios::in);
    if (!dataFile)
    {
        std::cout << "Error opening file. ";
        return 0;
    }

    std::getline(dataFile, input, '$');
    while (!dataFile.fail())
    {
        std::cout << input << std::endl;
        std::getline(dataFile, input, '$');
    }
    dataFile.close();
    return 0;
}
