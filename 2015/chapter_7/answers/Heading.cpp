#include <iostream>
#include <string>
#include "Heading.h"

void Heading::print()
{
    int lenCom = company.length();
    int lenRep = report.length();
    int totalLen = 40;

    for (int i = 1; i <= totalLen; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    int spaCom = (totalLen - lenCom) / 2;
    int spaRep = (totalLen - lenRep) / 2;

    for (int j = 1; j <= spaCom; j++)
    {
        std::cout << " ";
    }
    std::cout << company<< std::endl;

    for (int z = 1; z <= spaRep; z++)
    {
        std::cout << " ";
    }
    std::cout << report << std::endl;

    for (int x = 1; x <= totalLen; x++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

