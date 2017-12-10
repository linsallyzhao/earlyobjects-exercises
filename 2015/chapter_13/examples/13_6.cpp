#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::fstream file;
    std::string input;

    file.open("murphy.txt", std::ios::in);
    if (!file)
    {
        std::cout << "File open error! " << std::endl;
        return 0;
    }

    std::getline(file, input);
    while (file)
    {
        std::cout << input << std::endl;
        std::getline(file, input);
    }
    file.close();
    return 0;
}
