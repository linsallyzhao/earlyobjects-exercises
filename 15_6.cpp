#include <iostream>
#include <fstream>

using namespace std;

class Encryption{
    protected:
        ifstream inFile;
        ofstream outFile;
    public:
        Encryption(char *inFileName, char *outFileName);
        ~Encryption();

        virtual char transform(char ch) const = 0;
        void encrypt();
};

Encryption::Encryption(char *inFileName, char *outFileName) {
    inFile.open(inFileName);
    outFile.open(outFileName);

    if(!inFile) {
        cout << "The file " << inFileName << " cannot be opened.\n";
        exit(1);
    }

    if(!outFile) {
        cout << "The file " << outFileName << " cannot be opened.\n";
        exit(1);
    }

}

Encryption::~Encryption() {
    inFile.close();
    outFile.close();
}

void Encryption::encrypt() {
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail()) {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

class SimpleEncryption : public Encryption {
    public:
        char transform(char ch) const {
            return ch + 1;
        }

        SimpleEncryption(char *inFileName, char *outFileName):
            Encryption(inFileName, outFileName) {}

};

int main() {    
    char inFileName[80], outFileName[80];
    cout << "Enter the name of file to encrypty:\n";
    cin >> inFileName;
    cout << "Enter the name of file to receive the encrypted text:\n";
    cin >> outFileName;
    SimpleEncryption obfuscate(inFileName, outFileName);
    obfuscate.encrypt();
    return 0;
}

