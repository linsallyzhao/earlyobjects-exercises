#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile;
    std::string fileName;
    int number;

    std::cout << "Enter the fielname: ";
    std::cin >> fileName;

    inputFile.open(fileName.c_str());

    if (inputFile)
    {
        while (inputFile >> number)
            std::cout <<number << std::endl;

        inputFile.close();
    }
    else
        std::cout << "Error opening the file. \n";
    return 0;
}
