#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inputFile;
    int number;

    inputFile.open("ListOfNumbers");

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
