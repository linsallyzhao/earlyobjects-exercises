#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::string sentence;
    std::cout << "Enter your messed up sentence\n";
    std::getline(std::cin, sentence);
    std::cout << sentence.length() << std::endl;

    for (int index = 1; index < sentence.length(); index++)
    {
        if (isupper(sentence[index]))
        {
            sentence[index] = tolower(sentence[index]);
            sentence.insert(index, 1, ' ');
        }
    }

    std::cout << "This is a cleaned up one\n" << sentence << std::endl;

    return 0;
}

