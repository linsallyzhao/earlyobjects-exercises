#include <iostream>
#include <fstream>
#include <cctype>

int main()
{
    long offset;
    char ch;
    char response;

    std::fstream file("letters.txt", std::ios::in);
    if (!file)
    {
        std::cout << "Error opening file. ";
        return 0;
    }

    do
    {
        std::cout << "Currently at position " << file.tellg() << std::endl;
        std::cout << "Enter an offset from the beginning fo the file: ";
        std::cin >> offset;
        file.seekg(offset, std::ios::beg);
        file.get(ch);
        std::cout << "Character read: " << ch << std::endl;
        std::cout << "Do it again? ";
        std::cin >> response;
    } while(toupper(response) == 'Y');
    file.close();
    return 0;
}
