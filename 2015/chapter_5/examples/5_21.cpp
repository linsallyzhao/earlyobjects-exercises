#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inputFile;
    int numberOfDays = 0;
    double sales,
           totalSales = 0.0;

    inputFile.open("Sales");

    while (inputFile >> sales)
    {
        totalSales += sales;
        numberOfDays++;
    }
    inputFile.close();

    std::cout << "Total sales for the " << numberOfDays << " days sale is $"
              << totalSales;

    return 0;
}
