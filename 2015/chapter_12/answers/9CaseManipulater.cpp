#include <iostream>
#include <cstring>
#include <cstdlib>

char *upper(char *);
char *lower(char *);
char *flip(char *);

int main()
{
    char target[50];
    std::cout << "Enter the string you want to change\n";
    std::cin.getline(target, 49);
//    char up[50] = upper(target);
//    char low[50] = lower(target);
//    char fli[50] = flip(target);
    std::cout << "UP " << upper(target) << std::endl
              << "LOW " << lower(target) << std::endl
              << "Flip " << flip(target)  << std::endl;

    return 0;
}

char *upper(char *str)
{
    char *result = new char[strlen(str)];
    for (int index = 0; index < strlen(str); index++)
    {
        result[index] = toupper(str[index]);
    }
    return result;
}


char *lower(char *str)
{
    char *low = new char[strlen(str)];
    for (int index = 0; index < strlen(str); index++)
    {
        low[index] = tolower(str[index]);
    }
    return low;
}
char *flip(char *str)
{
    char *fli= new char[strlen(str)];
    for (int index = 0; index < strlen(str); index++)
    {
        if (isupper(str[index]))
        {
            fli[index] = tolower(str[index]);
        }
        else
            fli[index] = toupper(str[index]);
    }
    return fli;
}
