#include <iostream>
#include <fstream>

void readFile(std::ifstream&);

int main()
{
    std::ifstream dataIn;

    dataIn.open("weather.dat");
    if (dataIn.fail())
        std::cout << "Error opening data file. \n";
    else
    {
        readFile(dataIn);
        dataIn.close();
    }
    return 0;
}

void readFile(std::ifstream &someFile)
{
    int temperature;
    while (someFile >> temperature)
        std::cout << temperature << "   ";
    std::cout << std::endl;
}
