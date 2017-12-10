#include <iostream>
#include <fstream>
#include <cstdlib>

class Encryption
{
    protected:
        int key;
        std::ifstream inFile;
        std::ofstream outFile;

    public:
        Encryption(char *inFileName, char *outFileName);
        ~Encryption();
        virtual char transform(char ch) const = 0;
        void encrypt();
        void setKey(int k) { key = k; }
};

Encryption::Encryption(char *inFileName, char *outFileName)
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

Encryption::~Encryption()
{
    inFile.close();
    outFile.close();
}

void Encryption::encrypt()
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

class SimpleEncryption : public Encryption
{
    public:
        char transform(char ch) const
        {
            return ch + key;
        }
        SimpleEncryption(char *inFileName, char *outFileName)
            : Encryption(inFileName, outFileName)
        {
        }
};

class SimpleDecryption : public Encryption
{
    public:
        char transform(char ch) const
        {
            return ch - key;
        }
        SimpleDecryption(char *inFileName, char *outFileName)
            : Encryption(inFileName, outFileName)
        {
        }
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
    SimpleEncryption obfuscate(inFileName, outFileName);
    std::cout << "Please enter a key: \n";
    std::cin >> k;
    obfuscate.setKey(k);
    obfuscate.encrypt();

    std::cout << "Enter name of file to decrypt:\n";
    std::cin >> inFileName;
    std::cout << "Enter name of file to receive "
              << "the decrypted text:\n";
    std::cin >> outFileName;
    SimpleDecryption back(inFileName, outFileName);
    std::cout << "Please enter a key: \n";
    std::cin >> k;
    back.setKey(k);
    back.encrypt();
    return 0;
}

