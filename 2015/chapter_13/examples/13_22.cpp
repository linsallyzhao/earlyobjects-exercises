#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

class ColorCodeStream : public std::fstream
{
    public:
        void writeInColor(std::string str, std::string aColor)
        {
            *this << "<span style = \"color:" + aColor + "\"> ";
            *this << str << " <br/> ";
            *this << "</span>\n";
        }
};

void openFile(std::fstream &file, std::string descr);

int main()
{
    ColorCodeStream outputFile;
    std::fstream blackFile, blueFile;
    openFile(blackFile, "black");
    openFile(blueFile, "blue");
    openFile(outputFile, "output");

    std::string blackInput, blueInput;

    std::getline(blackFile, blackInput);
    std::getline(blueFile, blueInput);

    while (blackFile || blueFile)
    {
        if (blackFile && blueFile)
        {
            if (blackInput <= blueInput)
            {
                outputFile.writeInColor(blackInput, "black");
                std::getline(blackFile, blackInput);
            }
            else
            {
                outputFile.writeInColor(blueInput, "blue");
                std::getline(blueFile, blueInput);
            }
        }
        if (blackFile && !blueFile)
        {
            outputFile.writeInColor(blackInput, "black");
            std::getline(blackFile, blackInput);
        }
        if (blueFile && !blackFile)
        {
            outputFile.writeInColor(blueInput, "blue");
            std::getline(blueFile, blueInput);
        }
    }
    return 0;
}

void openFile(std::fstream &file, std::string descr)
{
    std::string fileName;
    std::cout << "Enter the name of the " << descr << " file: \n";
    std::cin >> fileName;

    if (descr == "output")
    {
        file.open(fileName.data(), std::ios::out);
    }
    else
    {
        file.open(fileName.data(), std::ios::in);
    }
    if (!file)
    {
        std::cout << "cannot open the file " << fileName;
        exit(1);
    }
}
