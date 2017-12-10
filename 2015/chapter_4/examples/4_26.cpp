#include <iostream>

int main()
{
    char feedGrade;

    std::cout << "Our dog food is available in three grades:\n";
    std::cout << "A, B, C. Which do you want pricing for? ";
    std::cin >> feedGrade;

    switch (feedGrade)
    {
        case 'a':
        case 'A': std::cout << "30 cents per pound.\n";
                  break;
        case 'b':
        case 'B': std::cout << "20 sents per pound.\n";
                  break;
        case 'c':
        case 'C': std::cout << "15 sents per pound.\n";
                  break;
        default : std::cout << "That we don't have :( \n";
    }
    return 0;
}
