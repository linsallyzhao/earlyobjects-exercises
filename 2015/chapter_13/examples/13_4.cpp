#include <iostream>
#include <fstream>

void showState(std::fstream &);

int main()
{
    std::fstream testFile("stuff.dat", std::ios::out);
    if (testFile.fail())
    {
        std::cout << "cannot open the file. \n";
        return 0;
    }
    int num = 10;
    std::cout << "Writing to the file. \n";
    testFile << num;
    showState(testFile);
    testFile.close();

    testFile.open("stuff.dat", std::ios::in);
    if (testFile.fail())
    {
        std::cout << "cannot open the file. \n";
        return 0;
    }
    std::cout << "Reading from the file. \n";
    testFile >> num;
    showState(testFile);
    std::cout << "Forcing a bad read operation. \n";
    testFile >> num;
    showState(testFile);

    testFile.close();
    return 0;
}

void showState(std::fstream &file)
{
    std::cout << "File Statues:\n";
    std::cout << "  eof bit: " << file.eof() << std::endl;
    std::cout << "  fail bit: " << file.fail() << std::endl;
    std::cout << "  bad bit: " << file.bad() << std::endl;
    std::cout << "  good bit: " << file.good() << std::endl;
    file.clear();
}
