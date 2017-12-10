#include <iostream>
#include <fstream>
#include <string>

class CodeMaker
{
    private:
        int size;
        char codeChar[94];

        int findIt(char[], int, char);

    public:
        CodeMaker();
        std::string encode(std::string);
        std::string decode(std::string);

};

CodeMaker::CodeMaker()
{
    size = 94;
    std::ifstream inFile;
    inFile.open("code.dat");

    for (int ascii = 32; ascii < 127; ascii++)
        inFile >> codeChar[ascii - 32];
    inFile.close();
}

std::string CodeMaker::encode(std::string s)
{
    int ascii;
    char newChar;
    std::string newString = "";

    for (unsigned pos = 0; pos < s.length(); pos++)
    {
        ascii = s[pos];
        newChar = codeChar[ascii - 32];
        newString += newChar;
    }
    return newString;
}

std::string CodeMaker::decode(std::string s)
{
    int index;
    char nextChar;
    char originalChar;
    std::string decodedText = "";

    for (unsigned pos = 0; pos < s.length(); pos++)
    {
        nextChar = s[pos];
        index = findIt(codeChar, size, nextChar);
        originalChar = index + 32;
        decodedText += originalChar;
    }
    return decodedText;
}

int CodeMaker::findIt(char A[], int size, char value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size & !found)
    {
        if (A[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

int main()
{
    std::string originalText, secretCode, finalText;
    CodeMaker myCoder;
    std::cout << "Enter the message to be endcoded. \n";
    std::getline(std::cin, originalText);

    secretCode = myCoder.encode(originalText);
    std::cout << "\nHere is the encoded message\n" << secretCode;

    finalText = myCoder.decode(secretCode);
    std::cout << "\nHere is the decoded message\n" << finalText;

    return 0;
}
