#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    const int NUM_OFFICES = 12;
    std::ifstream dataIn;
    int office;
    double sales[NUM_OFFICES],
           totalSales = 0.0,
           averageSales,
           highestSales,
           lowestSales;

    dataIn.open("sales.dat");
    if (!dataIn)
        std::cout << "Error opening data file. \n";
    else
    {
        for (office = 0; office < NUM_OFFICES; office++)
            dataIn >> sales[office];
        dataIn.close();

        for (office = 0; office < NUM_OFFICES; office++)
            totalSales += sales[office];

        averageSales = totalSales / NUM_OFFICES;

        highestSales = lowestSales= sales[0];

        for (office = 0; office < NUM_OFFICES; office++)
        {
            if (sales[office] > highestSales)
                highestSales = sales[office];
            else if (sales[office] < lowestSales)
                lowestSales = sales[office];
        }

        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "Total sales       $" << std::setw(9) << totalSales << std::endl
                  << "Average sales     $" << std::setw(9) << averageSales << std::endl
                  << "Highest sales     $" << std::setw(9) << highestSales << std::endl
                  << "Lowest slaes      $" << std::setw(9) << lowestSales << std::endl;
    }
    return 0;
}

