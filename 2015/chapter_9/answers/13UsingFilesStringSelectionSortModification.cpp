#include <iostream>
#include <string>
#include <fstream>

void selectionSort(std::string [], int);
void showStrings(std::string [], int);

int main()
{
    const int SIZE = 20;
    std::ifstream inData;
    inData.open("names.dat");
    std::string name[SIZE];

    if (!inData)
        std::cout << "Error opening file. \n";
    else
    {
        for (int index = 0; index < SIZE; index++)
            std::getline(inData, name[index]);
    }
    inData.close();

    selectionSort(name, SIZE);
    showStrings(name, SIZE);

    return 0;
}

void selectionSort(std::string array[], int size)
{
    int start, minIndex;
    std::string minString;

    for (start = 0; start < size; start++)
    {
        minIndex = start;
        minString = array[start];
        for ( int index = start + 1; index < size; index++)
        {
            if (array[index] < minString)
            {
                minString = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[start];
        array[start] = minString;
    }
}

void showStrings(std::string array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        std::cout << array[index] << std::endl;
    }
}
