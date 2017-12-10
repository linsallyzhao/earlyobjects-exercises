#include <iostream>
#include <cstring>
#include <cstdlib>

void capSentence(char *);

int main()
{
    std::cout << "Please enter a sentence, no, a few sentence:\n";
    char str[100];
    std::cin.getline(str, 100);
    capSentence(str);
    return 0;
}

void capSentence(char *str)
{
    str[0] = toupper(str[0]);
    for (int index = 1; index < strlen(str); index++)
    {
        if (str[index] == '.' || str[index] == '?' || str[index] == '!')
            str[index + 2] = toupper(str[index + 2]);
    }
    std::cout << str << std::endl;
}

