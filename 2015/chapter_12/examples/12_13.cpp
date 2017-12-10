#include <iostream>

int countChars(const char *, char);

int main()
{
    const int S_LENGTH = 51;
    char userString[S_LENGTH];

    char letter;
    std::cout << "Enter a string (up to " << S_LENGTH - 1
              << " characters): ";
    std::cin.getline(userString, S_LENGTH);
    std::cout << "Enter a character and I will tell you\n"
              << "how many times it apprers in the string: \n";
    std::cin >> letter;

    std::cout << letter << " appears ";
    std::cout << countChars(userString, letter) << " times. \n";

    return 0;
}

int countChars(const char * strPtr, char ch)
{
    int count = 0;
    while (*strPtr != '\0')
    {
        if (*strPtr == ch)
            count++;
        strPtr++;
    }
    return count;
}

