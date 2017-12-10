#include <iostream>
#include <fstream>
#include <string>

struct Division
{
    std::string name;
    double q1, q2, q3, q4;
};

void output(std::string, Division &);

int main()
{
    std::string div;
    double sale;
    Division list[4];

    for (int count = 0; count < 4; count++)
    {
        std::cout << "Please enter the division name\n";
        std::getline(std::cin, div);
        list[count].name = div;

        std::cout << "Please enter Q1 sale\n";
        std::cin >> sale;
        list[count].q1 = sale;
        std::cout << "Please enter Q2 sale\n";
        std::cin >> sale;
        list[count].q2 = sale;
        std::cout << "Please enter Q3 sale\n";
        std::cin >> sale;
        list[count].q3 = sale;
        std::cout << "Please enter Q4 sale\n";
        std::cin >> sale;
        list[count].q4 = sale;
        std::cin.ignore();
    }
    for (int index = 0; index < 4; index++)
    {
        output("sales.dat", list[index]);
    }
    return 0;
}

void output(std::string file, Division & div)
{

    std::fstream outFile(file.c_str(), std::ios::app | std::ios::out);
    outFile << "Name: " << div.name << std::endl;
    outFile << "Q1:     " << div.q1 << std::endl;
    outFile << "Q2:     " << div.q2 << std::endl;
    outFile << "Q3:     " << div.q3 << std::endl;
    outFile << "Q4:     " << div.q4 << std::endl;
    outFile.close();
}
