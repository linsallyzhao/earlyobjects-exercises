#include <iostream>
#include <cstring>
#include <cstdlib>

bool len(char *);
bool caseUL(char *);
bool digit(char*);

int main()
{
    char password[50];
    std::cout << "Enter the pass word\n";
    std::cin.getline(password, 49);

    if (!len(password))
        std::cout << "Not long enough\n";
    if (!caseUL(password))
        std::cout << "Case\n";
    if (!digit(password))
        std::cout << "Need digit\n";

    return 0;
}

bool len(char *str)
{
    bool length = false;
    if (strlen(str) >= 6)
        length = true;
    return length;
}
bool caseUL(char *str)
{
    bool caseUL = false;
    bool up = false;
    bool low = false;
    for (int index = 0; index < strlen(str); index++)
    {
        if (isupper(str[index]))
            up = true;
        if (islower(str[index]))
            low = true;
    }
    if (up && low)
        caseUL = true;

    return caseUL;
}

bool digit(char* str)
{
    bool dig = false;
    for (int index = 0; index < strlen(str); index++)
    {
        if (isdigit(str[index]))
            dig = true;
    }
    return dig;
}


