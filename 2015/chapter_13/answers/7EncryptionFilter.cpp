#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string inName;
    std::fstream inFile;
    std::cout << "Enter the infile name\n";
    std::getline(std::cin, inName);
    inFile.open(inName.c_str(), std::ios::in);
    std::fstream outFile("encrypted.txt", std::ios::out);

    if (!inFile)
    {
        std::cout << "Error opening file\n";
        return 0;
    }
    else
    {
        char ch = 0;
        while (!inFile.eof())
        {
            inFile.get(ch);
            outFile.put(ch + 10);
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}
