#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outputFile;
    int numberOfDays;
    double sales;

    std::cout << "For how many days do you have sales? ";
    std::cin >> numberOfDays;

    outputFile.open("Sales");

    for (int count = 1; count <= numberOfDays; count++)
    {
        std::cout << "Enter the sales for day " << count << ": ";
        std::cin >> sales;

        outputFile << sales << std::endl;
    }
    outputFile.close();

    std::cout << "Data written to Sales.\n";
    return 0;
}
