#include <iostream>
#include <string>
#include <iomanip>

void getData(double rain[], int size);
double totalRainfall(const double rain[], int size);
double averageRainfall(const double rain[], int size);
int driestMonth(const double rain[], int size);
int wettestMonth(const double rain[], int size);

int main()
{
    std::string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    double rainfall[12];
    getData(rainfall, 12);
    double total = totalRainfall(rainfall, 12);
    double avg = averageRainfall(rainfall, 12);
    int dryIndex = driestMonth(rainfall, 12);
    int wetIndex = wettestMonth(rainfall, 12);

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total rainfall: " << total << " inches \n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Average monthly rainfall: " << avg << " inches\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The least rain fell in " << month[dryIndex] << " with " 
              << rainfall[dryIndex] << " inches. \n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "The most rain fell in " << month[wetIndex] << " with " 
              << rainfall[wetIndex] << " inches. \n";

    return 0;
}

void getData(double rain[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << "Please enter rain fall for month #" << (index + 1) << ": ";
        std::cin >> rain[index];
    }
}

double totalRainfall(const double rain[], int size)
{
    double total = 0;
    for (int index = 0; index < size; index++)
    {
        total += rain[index];
    }
    return total;
}


double averageRainfall(const double rain[], int size)
{
    double total = totalRainfall(rain, size);
    double average = total / size;
    return average;
}

int driestMonth(const double rain[], int size)
{
    int record = 0;
    double  highest = rain[0];
    for (int index = 0; index < size; index++)
    {
        if (rain[index] < highest)
        {
            highest = rain[index];
            record = index;
        }

    }
    return record;
}
int wettestMonth(const double rain[], int size)
{
    int record = 0;
    double  highest = rain[0];
    for (int index = 0; index < size; index++)
    {
        if (rain[index] > highest)
        {
            highest = rain[index];
            record = index;
        }

    }
    return record;
}



