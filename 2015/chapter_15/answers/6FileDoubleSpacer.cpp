#include <iostream>
#include <fstream>
#include <cstdlib>

class FileFilter
{
    protected:
        int key;
        std::ifstream inFile;
        std::ofstream outFile;

    public:
        FileFilter(char *inFileName, char *outFileName);
        ~FileFilter();
        virtual char transform(char ch) = 0;
        void doFilter();
};

FileFilter::FileFilter(char *inFileName, char *outFileName)
{
    inFile.open(inFileName);
    outFile.open(outFileName);
    if (!inFile)
    {
        std::cout << "The file " << inFileName
                  << " cannot be opened.\n";
        exit(1);
    }
    if (!outFile)
    {
        std::cout << "The file " << outFileName
                  << " cannot be opened.\n";
        exit(1);
    }
}

FileFilter::~FileFilter()
{
    inFile.close();
    outFile.close();
}

void FileFilter::doFilter()
{
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail())
    {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

class DoubleSpace: public FileFilter
{
    public:
        DoubleSpace(char *inFileName, char *outFileName)
            : FileFilter(inFileName, outFileName)
        {
        }
        char transform(char ch) 
        {
            if (ch == '\n')
                outFile.put(ch);
            return ch;
        }
};

int main()
{
    char inFileName[80], outFileName[80];
    std::cout << "Enter name of file to encrypt:\n";
    std::cin >> inFileName;
    std::cout << "Enter name of file to receive "
              << "the encrypted text:\n";
    std::cin >> outFileName;
    DoubleSpace addLine(inFileName, outFileName);
    addLine.doFilter();

    return 0;
}

