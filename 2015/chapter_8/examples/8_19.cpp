#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS];
    double totalSales = 0;
    int div, qtr;
    std::ifstream datafile;

    datafile.open("datafile");
    if (!datafile)
        std::cout << "Error opening data file. \n";
    else
    {
        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "Quarterly Sales by Division\n\n";

        for (div = 0; div < NUM_DIVS; div++)
        {
            for (qtr = 0; qtr < NUM_QTRS; qtr++)
            {
                std::cout << "Division " << (div + 1)
                          << ", Quarter " << (qtr + 1) << ": $";
                datafile >> sales[div][qtr];
                std::cout << sales[div][qtr] << std::endl;
            }
            std::cout << std::endl;
        }
        datafile.close();

        for (div = 0; div < NUM_DIVS; div++)
        {
            for (qtr = 0; qtr < NUM_QTRS; qtr++)
                totalSales += sales[div][qtr];
        }
        std::cout << "The total sales for the company are: $"
                  << totalSales << std::endl;
    }
    return 0;
}
