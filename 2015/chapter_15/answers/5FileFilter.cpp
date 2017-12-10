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
        virtual char transform(char ch) const = 0;
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

class SimpleEncryption : public FileFilter 
{
    private:
        int key;
    public:
        void setKey(int k) { key = k; }
        char transform(char ch) const
        {
            return ch + key;
        }
        SimpleEncryption(char *inFileName, char *outFileName, int k)
            : FileFilter(inFileName, outFileName)
        {
            setKey(k);
        }
};

class ToUpperCase : public FileFilter
{
    public:
        ToUpperCase(char *inFileName, char *outFileName)
            : FileFilter(inFileName, outFileName)
        {
        }
        char transform(char ch) const
        {
            return toupper(ch);
        }
};

class Original : public FileFilter
{
    public:
        Original(char *inFileName, char *outFileName)
            : FileFilter(inFileName, outFileName)
        {
        }
        char transform(char ch) const {return ch;}
};

int main()
{
    char inFileName[80], outFileName[80];
    int k;
    std::cout << "Enter name of file to encrypt:\n";
    std::cin >> inFileName;
    std::cout << "Enter name of file to receive "
              << "the encrypted text:\n";
    std::cin >> outFileName;
    std::cout << "Please enter a key: \n";
    std::cin >> k;
    SimpleEncryption obfuscate(inFileName, outFileName, k);
    obfuscate.doFilter();

    std::cout << "Enter name of file to decrypt:\n";
    std::cin >> inFileName;
    std::cout << "Enter name of file to receive "
              << "the decrypted text:\n";
    std::cin >> outFileName;
    ToUpperCase upper(inFileName, outFileName);
    upper.doFilter();

    std::cout << "Enter name of file to decrypt:\n";
    std::cin >> inFileName;
    std::cout << "Enter name of file to receive "
              << "the decrypted text:\n";
    std::cin >> outFileName;
    Original copy(inFileName, outFileName);
    copy.doFilter();

    return 0;
}

