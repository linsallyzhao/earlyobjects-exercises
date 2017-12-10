#include <iostream>
#include <cstring>
#include <cstdlib>

void countVowels(char *);
void countConsonants(char *);
void menu();

int main()
{
    char choice;
    char target[100];
    std::cout << "Enter the string\n";
    std::cin.getline(target, 100);
    menu();
    std::cin >> choice;

    while (toupper(choice) != 'E')
    {
        switch (choice)
        {
            case 'a':
            case 'A': countVowels(target);
            break;
            case 'b':
            case 'B': countConsonants(target);
            break;
            case 'c':
            case 'C': countVowels(target);
                    countConsonants(target);
            case 'd':
            case 'D': std::cout << "Another string\n";
                    std::cin.getline(target, 100);
        }
        menu();
        std::cout << "Enter choice\n";
        std::cin >> choice;
    }
    return 0;
}
void countVowels(char * str)
{
    int count = 0;
    for (int index = 0; index < strlen(str); index++)
    {
        if(toupper(str[index]) == 'A' ||
           toupper(str[index]) == 'E' ||
           toupper(str[index]) == 'I' ||
           toupper(str[index]) == 'O' ||
           toupper(str[index]) == 'U')
            count++;
    }
    std::cout << "String contains " << count << " vowels\n";
}
void countConsonants(char * str)
{
    int countV = 0;
    int countS = 0;
    for (int index = 0; index < strlen(str); index++)
    {
        if(toupper(str[index]) == 'A' ||
           toupper(str[index]) == 'E' ||
           toupper(str[index]) == 'I' ||
           toupper(str[index]) == 'O' ||
           toupper(str[index]) == 'U')
            countV++;
        if (str[index] == ' ' ||
            str[index] == ',' ||
            str[index] == '.' ||
            str[index] == '?' ||
            str[index] == '!' ||
            str[index] == '\'')
            countS++;
    }
    std::cout << "String contains " << strlen(str) - countV - countS
              << " consonants\n";
}
void menu()
{
    std::cout << "Please choose from the menu:\n";
    std::cout << "A) count vowels\n"
              << "B) count consonants\n"
              << "C) count both vowels and consonants\n"
              << "D) another string\n"
              << "E) quit\n";
}



