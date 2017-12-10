#include <iostream>
#include <string>

struct RainFall
{
    std::string name;
    double rain;

    RainFall(std::string mon = "", double r = 0.0)
    {
        name = mon;
        rain = r;
    }

};

void getInput(RainFall data[], int size);
void sortData(RainFall data[], int size);
void displayData(RainFall data[], int size);

int main()
{
    RainFall rain[12] = {RainFall("Jan"), RainFall("Feb"), RainFall("Mar"),
                         RainFall("Apr"), RainFall("May"), RainFall("Jun"),
                         RainFall("Jul"), RainFall("Aug"), RainFall("Sep"),
                         RainFall("Oct"), RainFall("Nov"), RainFall("Dec")};

    getInput(rain, 12);
    
    sortData(rain, 12);

    displayData(rain, 12);

    return 0;
}

void getInput(RainFall data[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << "Please enter the rain fall data for " << data[index].name
                  << std::endl;
        std::cin >> data[index].rain;
    }
}

void sortData(RainFall data[], int size)
{
    double minValue;
    int minIndex, startScan;

    for (int index = 0; index < (size - 1); index++)
    {
        RainFall temp;
        startScan = index;
        minIndex = index;
        minValue = data[index].rain;
        for (startScan = index + 1;startScan < size; startScan++)
        {
            if (data[startScan].rain < minValue)
            {
                minValue = data[startScan].rain;
                minIndex = startScan;
            }
        }
        temp = data[minIndex];
        data[minIndex] = data[index];
        data[index] = temp;
    }
}

void displayData(RainFall data[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << "Rain fall for " << data[index].name
                  << " is " << data[index].rain << std::endl;
    }
}
