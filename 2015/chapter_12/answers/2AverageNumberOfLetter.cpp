#include <iostream>
#include <cstring>
#include <cstdlib>

int wordCounter(char *);

int main()
{
    char target[80];
    std::cout << "Enter a sentence\n";
    std::cin.getline(target, 79);

    std::cout << "It has " << wordCounter(target) << " words.\n";
    return 0;
}
int wordCounter(char *str)
{
    int count;
    if (str[0] != '\0')
    {
        count = 1;
        for (int index = 0; index < strlen(str); index++)
        {
            if (str[index] == ' ')
                count++;
        }
    }
    else
        count = 0;
    std::cout << "On average, each word has " 
              << (strlen(str) - count) / (count * 1.0)
              << " letters.\n";

    return count;
}

