#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>

int main()
{
    std::ifstream input;
    input.open("spelling.dat");
    if (!input)
        std::cout << "Error opening file\n";
    else
    {
        std::string temp;
        while(input >> temp)
        {
            int pos1 = -1;
            int pos2 = -1;

            pos1 = temp.find("ie", 0);
            pos2 = temp.find("ei", 0);
            if (pos1 != -1 || pos2 != -1)
                std::cout << temp << std::endl;
        }
    }
    input.close();
}
