#include <iostream>
#include <string>

struct SnowFall
{
    int date;
    double snow;

    SnowFall()
    {
        date = 0;
        snow = 0;
    }
};

void getInput(SnowFall data[], int size, int, int);
void sortData(SnowFall data[], int size);
void displayData(SnowFall data[], int size);

int main()
{
    std::string month;
    int startDate, endDate;
    std::cout << "Please enter the month: ";
    std::cin >> month;
    std::cout << "Please enter the start and end date: ";
    std::cin >> startDate >> endDate;

    SnowFall ski[7];
    getInput(ski, 7, startDate, endDate);
    
    sortData(ski, 7);

    std::cout << "Snow report " << month << startDate << "--" << endDate << std::endl;

    displayData(ski, 7);

    return 0;
}

void getInput(SnowFall data[], int size, int start, int end)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << "Please enter the snow fall data for " << (start + index)
                  << std::endl;
        std::cin >> data[index].snow;
        data[index].date = (start + index);
    }
}

void sortData(SnowFall data[], int size)
{
    double minValue;
    int minIndex, startScan;

    for (int index = 0; index < (size - 1); index++)
    {
        SnowFall temp;
        startScan = index;
        minIndex = index;
        minValue = data[index].snow;
        for (startScan = index + 1;startScan < size; startScan++)
        {
            if (data[startScan].snow < minValue)
            {
                minValue = data[startScan].snow;
                minIndex = startScan;
            }
        }
        temp = data[minIndex];
        data[minIndex] = data[index];
        data[index] = temp;
    }
}

void displayData(SnowFall data[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << "Snow fall for " << data[index].date
                  << " is " << data[index].snow<< std::endl;
    }
}
