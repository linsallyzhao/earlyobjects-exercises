#include <iostream>

int main()
{
    const int SIZE = 81;
    char sentence[SIZE];

    std::cout << "Enter a sentence: ";
    std::cin.getline(sentence, SIZE);
    std::cout << "You entered " << sentence << std::endl;

    return 0;
}
