#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inputFile;
    int numberOfDays;
    double sales,
           totalSales = 0.0;

    std::cout << "How many days of sales data are stored in your file? \n";
    std::cin >> numberOfDays;

    inputFile.open("Sales");

    for (int count = 1; count <= numberOfDays; count++)
    {
        inputFile >> sales;
        totalSales += sales;
    }
    inputFile.close();

    std::cout << "Total sales for the " << numberOfDays << " days sale is $"
              << totalSales;

    return 0;
}
