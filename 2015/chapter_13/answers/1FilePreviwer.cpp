#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string input;
    std::string fileName;
    std::fstream inFile;
    std::cout << "Which file do you want to open?\n";
    std::getline(std::cin, fileName);
    inFile.open(fileName.c_str(), std::ios::in);
    if (!inFile)
    {
        std::cout << "Error opening file!\n";
        return (0);
    }
    else
    {

        for (int index = 0; index < 10; index++)
        {
            if (!inFile.eof())
            {
                std::getline(inFile, input);
                std::cout << input << std::endl;
            }
            else
            {
                std::cout << "This is the end of the file\n";
                return (0);
            }
        }
    }
    inFile.close();
    return 0;
}

