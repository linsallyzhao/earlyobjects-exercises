#include <iostream>
#include <iomanip>

void getSales(double *sales, int size);
double totalSales(double *sales, int size);

int main()
{
    const int QUARTERS = 4;
    double sales[QUARTERS];

    getSales(sales, QUARTERS);
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "The total sales for the year are $";
    std::cout << totalSales(sales, QUARTERS) << std::endl;
    return 0;
}

void getSales(double *array, int size)
{
    for (int count = 0; count < size; count++)
    {
        std::cout << "Enter the sales figure for quarter " 
                  << (count + 1) << ": ";
        std::cin >> array[count];
    }
}

double totalSales(double *array, int size)
{
    double sum = 0.0;
    for (int count = 0; count < size; count++)
    {
        sum += *array;
        array++;
    }
    return sum;
}
