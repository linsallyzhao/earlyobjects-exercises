#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

int main()
{
    std::string inName, outName;
    std::fstream inFile, outFile;

    std::cout << "Enter input file name\n";
    std::getline(std::cin, inName);
    std::cout << "Enter output file name \n";
    std::getline(std::cin, outName);
    inFile.open(inName.c_str(), std::ios::in);
    outFile.open(outName.c_str(), std::ios::out);

    if (!inFile)
    {
        std::cout << "Error opening file\n";
        return 0;
    }
    else
    {
        char ch = 0;
        inFile.get(ch);
        outFile.put(toupper(ch));
        while(!inFile.eof())
        {
            if (ch != '.')
            {
                inFile.get(ch);
                outFile.put(tolower(ch));
            }
            else
            {
                inFile.get(ch);
                outFile.put(toupper(ch));
                inFile.get(ch);
                outFile.put(toupper(ch));
            }
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}


