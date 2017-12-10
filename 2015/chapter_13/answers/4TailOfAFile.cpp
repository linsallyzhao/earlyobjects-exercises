#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream inFile;
    std::string input;
    std::string fileName;

    std::cout << "Enter the file name\n";
    std::getline(std::cin, fileName);
    inFile.open(fileName.c_str(), std::ios::in);
    if (!inFile)
    {
        std::cout << "Cannot open file\n";
        return 0;
    }
    else
    {

        long pos = -1;
        char ch = 0;
        int count = 0;
        while (count <= 10)
        {
            inFile.seekg(pos, std::ios::end);
            inFile.get(ch);
            pos--;
            while(ch != '\n')
            {
                inFile.seekg(pos, std::ios::end);
                inFile.get(ch);
                pos--;
            }

            count++;
        }
        while (!inFile.eof())
        {
            std::getline(inFile, input);
            std::cout << input << std::endl;
        }
    }
    inFile.close();

    return 0;
}


