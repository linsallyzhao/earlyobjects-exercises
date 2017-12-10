#include <iostream>
#include <string>
#include <cctype>

int main()
{
    char ch;
    int vowelCount = 0;
    std::string sentence;

    std::cout << "Enter any sentence you wish and I will \n"
              << "tell you how namy vowels are in it. \n";
    std::getline(std::cin, sentence);

    for (int pos = 0; pos < sentence.length(); pos++)
    {
        ch = toupper(sentence[pos]);
        switch(ch)
        {
            case 'A':
            case 'B':
            case 'I':
            case 'O':
            case 'U': vowelCount++;
        }
    }
    std::cout << "There are " << vowelCount << " vowels in the sentance. \n";
    return 0;
}
