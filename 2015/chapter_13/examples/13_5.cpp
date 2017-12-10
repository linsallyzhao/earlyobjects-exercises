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

    file >> input;
    while (!file.fail())
    {
        std::cout << input;
        file >> input;
    }
    file.close();
    return 0;
}
