#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream inFile;
    std::string input;
    std::string fileName;
    char ch;

    std::cout << "Which file do you want to look at?\n";
    std::getline(std::cin, fileName);
    inFile.open(fileName.c_str(), std::ios::in);

    if(!inFile)
    {
        std::cout << "Cannot open the file\n";
        return (0);
    }
    else
    {
        do
        {
            for (int index = 0; index < 24; index++)
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
            std::cout << std::endl << "Press any key to cotinue\n";
        } while(std::cin.get(ch));
    }
    inFile.close();
    return 0;
}

