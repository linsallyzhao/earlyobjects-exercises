#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string fileName;
    std::fstream inFile;

    std::cout << "Enter the file you want to open\n";
    std::getline(std::cin, fileName);

    inFile.open(fileName.c_str(), std::ios::in);

    if (!inFile)
    {
        std::cout << "Cannot open the file\n";
        return 0;
    }
    else
    {
        std::string input;
        int pos = -1;
        while (!inFile.eof())
        {
            std::getline(inFile, input);
            pos = input.find("Zelda", 0);
            if (pos != -1)
            {
                std::cout << input << std::endl;
                pos = -1;
            }
        }
    }
    return 0;
}
            

