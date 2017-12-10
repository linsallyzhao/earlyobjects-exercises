#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string fileName;
    std::fstream file;
    char ch;

    std::cout << "Enter a file name: ";
    std::cin >> fileName;

    file.open(fileName.c_str(), std::ios::in);
    if (!file)
    {
        std::cout << fileName << " could not be opened. \n";
        return 1;
    }
    ch = file.get();
    while (ch != EOF)
    {
        std::cout << ch;
        ch = file.get();
    }
    file.close();
    return 0;
}
