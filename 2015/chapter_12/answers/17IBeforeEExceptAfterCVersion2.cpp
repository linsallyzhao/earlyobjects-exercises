#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

int main()
{
    std::ifstream input;
    input.open("spelling.dat");
    if (!input)
        std::cout << "Error opening file\n";
    else
    {
        char temp[20];
        while(input >> temp)
        {
            char *pos1 = 0;
            char *pos2 = 0;

            pos1 = strstr(temp, "ie");
            pos2 = strstr(temp, "ei");
            if (pos1 != 0 || pos2 != 0)
                std::cout << temp << std::endl;
        }
    }
    input.close();
}
