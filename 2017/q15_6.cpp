#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

class FileFilter{
    protected:
        ifstream inFile;
        ofstream outFile;
    public:
        FileFilter(char *inFileName, char *outFileName);
        ~FileFilter();

        virtual char transform(char ch)  = 0;
        void doFilter();
};

FileFilter::FileFilter(char *inFileName, char *outFileName) {
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

FileFilter::~FileFilter() {
    inFile.close();
    outFile.close();
}

void FileFilter::doFilter() {
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail()) {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

class DoubleSpacer : public FileFilter {
    public:
        char transform(char ch)  {
            if (ch == '\n') 
                outFile.put('\n');
            return ch;
        }

        DoubleSpacer(char *inFileName, char *outFileName):
            FileFilter(inFileName, outFileName) {}

};
class Encription : public FileFilter {
    private:
        int key;
    public:
        char transform(char ch)  {
            return ch + key;
        }
        void setKye() {
            cout << "Please enter a key\n";
            cin >> key;
        }

        Encription(char *inFileName, char *outFileName):
            FileFilter(inFileName, outFileName) {
            setKye();
        }

};
class Decription : public FileFilter {
    private:
        int key;
    public:
        void setKye() {
            cout << "Please enter a key\n";
            cin >> key;
        }
        char transform(char ch)  {
            return ch - key;
        }

        Decription(char *inFileName, char *outFileName):
            FileFilter(inFileName, outFileName) {
            setKye();
        }

};

class UpperCase : public FileFilter {
    public:
        char transform(char ch)  {
            if (isalpha(ch))
                return toupper(ch);
            else
                return ch;
        }

        UpperCase(char *inFileName, char *outFileName):
            FileFilter(inFileName, outFileName) {}

};
int main() {    
    char inFileName[80], outFileName[80];
    cout << "Enter the name of file to encrypty:\n";
    cin >> inFileName;
    cout << "Enter the name of file to receive the encrypted text:\n";
    cin >> outFileName;
    UpperCase obfuscate(inFileName, outFileName);
    obfuscate.doFilter();
    return 0;
}

