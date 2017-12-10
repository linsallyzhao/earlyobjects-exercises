#include <iostream>
#include <fstream>

int main()
{
    std::ifstream infile;
    int population;
    infile.open("population");
    for (int year = 1910; year <= 2000; year += 20)
    {
        infile >> population;
        std::cout << year << "  ";
        int star = population / 1000;
        for (int count = 1; count <= star; count++)
            std::cout << "*";
        std::cout << std::endl;
    }
    infile.close();
    return 0;
}

