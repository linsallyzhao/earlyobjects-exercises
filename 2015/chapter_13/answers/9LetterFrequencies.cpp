#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string fileName;
    std::fstream inFile;
    std::cout << "Enter file name you want to test\n";
    std::getline(std::cin, fileName);
    inFile.open(fileName.c_str(), std::ios::in);
    int letters[129];
    for (int index = 0; index < 129; index++)
    {
        letters[index] = index;
    }
    int count[129] = {0};

    if (!inFile)
    {
        std::cout << "Cannot open the file\n";
        return 0;
    }
    else
    {
        char ch = 0;
        while (!inFile.eof())
        {
            inFile.get(ch);
            for (int index = 0; index < 129; index++)
            {
                if (ch == letters[index])
                    count[index]++;
            }
        }
    }
    inFile.close();
    char letter;
    std::cout << std::endl;

    for (int index = 0; index < 129; index++)
    {
        letter = letters[index];
        std::cout << letter << ": " << count[index] << std::endl;
    }
    return 0;
}


