#include <iostream>
#include <fstream>
#include <string>

struct Division
{
    std::string name;
    double q1, q2, q3, q4;
};

int main()
{
    Division list[4];
    std::string junk;
    std::string n;
    double sale;

    std::fstream inFile("sales.dat", std::ios::in);
    for (int index = 0; index < 4; index++)
    {
        std::getline(inFile, junk, ' ');
        std::getline(inFile, n);
        list[index].name = n;
        std::getline(inFile, junk, ':');
        inFile >> sale;
        list[index].q1 = sale;
        std::getline(inFile, junk, ':');
        inFile >> sale;
        list[index].q2 = sale;
        std::getline(inFile, junk, ':');
        inFile >> sale;
        list[index].q3 = sale;
        std::getline(inFile, junk, ':');
        inFile >> sale;
        list[index].q4 = sale;
    }

    double corpTotal = 0;
    double divTotal = 0;
    double q1T = 0;
    double q2T = 0;
    double q3T = 0;
    double q4T = 0;
    for (int index = 0; index < 4; index++)
    {
        q1T += list[index].q1;
        q2T += list[index].q2;
        q3T += list[index].q3;
        q4T += list[index].q4;

        divTotal = list[index].q1 + list[index].q2
                    + list[index].q3 + list[index].q4;
        std::cout << "Division " << list[index].name << "'s yearly total"
                  << " is $" << divTotal << std::endl;
        std::cout << "average quaterly sale is $" << divTotal/4 << std::endl;
        corpTotal += divTotal;
        divTotal = 0;
    }
    std::cout << "Total company sale is $" << corpTotal << std::endl;
    std::cout << "Total company sale for Q1 is: " << q1T << std::endl
              << "Q2: " << q2T << std::endl
              << "Q3: " << q3T << std::endl
              << "Q4: " << q4T << std::endl;
    return 0;
}


