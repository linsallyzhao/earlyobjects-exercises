#include <iostream>
#include <string>
#include <fstream>

int main()
{
    char ch;
    int number;
    
    std::string fileName;
    std::fstream inFile, outFile;

    std::cout << "Enter a file name: ";
    std::cin >> fileName;
    inFile.open(fileName.c_str(), std::ios::in);
    if (!inFile)
    {
        std::cout << "Cannot open file " << fileName;
        return 1;
    }
    outFile.open("modified.txt", std::ios::out);
    if (!outFile)
    {
        std::cout << "Cannot open the output file.";
        return 2;
    }

    inFile.get(ch);
    inFile.unget();

    while (ch != EOF)
    {
        if (isdigit(ch))
        {
            inFile >> number;
            outFile << number + 1;
        }
        else
        {
            ch = inFile.get();
            outFile << ch;
        }
        inFile.get(ch);
        inFile.unget();
    }
    inFile.close();
    outFile.close();
    return 0;
}
