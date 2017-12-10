#include <iostream>
#include <iomanip>

int main()
{
    const int SIZE = 5;
    char word[SIZE];

    std::cout << "Enter a word: ";
    std::cin.width(SIZE);
    std::cin >> word;
    std::cout << "You enterd " << word << std::endl;

    return 0;
}
