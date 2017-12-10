#include <iostream>

void stringCopy(char [], const char[]);

int main()
{
    const int S_LENGTH = 30;
    char dest[S_LENGTH], source[S_LENGTH];

    std::cout << "Enter a string with no more than "
              << S_LENGTH - 1 << " characters:\n";
    std::cin.getline(source, S_LENGTH);

    stringCopy(dest, source);
    std::cout << "The string you entered is:\n" << dest << std::endl;

    return 0;
}

void stringCopy(char destStr[], const char sourceStr[])
{
    int index = 0;
    while (sourceStr[index] != '\0')
    {
        destStr[index] = sourceStr[index];
        index++;
    }
    destStr[index] = '\0';
}

