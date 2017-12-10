#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    const int SIZE = 20;
    std::ifstream dataIn;
    int numOffices,
        count;
    double sales[SIZE],
           totalSales = 0.0,
           averageSales;

    dataIn.open("sales.dat");
    if(!dataIn)
        std::cout << "Error opening the data file. \n";
    else
    {
        count = 0;
        while (count < SIZE && dataIn >> sales[count])
        {
            totalSales += sales[count];
            count++;
        }
        numOffices = count;
        dataIn.close();

        averageSales = totalSales / numOffices;

        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "The total sales are  $"
                  << std::setw(9) << totalSales << std::endl;
        std::cout << "The average sales are $"
                  << std::setw(9) << averageSales << std::endl;

        std::cout << "\nThe following office have below-average "
                  << "sales figures. \n";
        for (int office = 0; office < numOffices; office++)
        {
            if (sales[office] < averageSales)
                std::cout << "Office " << std::setw(2) << (office + 1)
                          << " $" << sales[office] << std::endl;
        }
    }
    return 0;
}
