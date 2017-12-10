#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void selectionSort(std::vector<std::string> &);
void showStrings(std::vector<std::string>);

int main()
{
    const int SIZE = 20;
    std::ifstream inData;
    inData.open("names.dat");
    std::vector<std::string> name;

    if (!inData)
        std::cout << "Error opening file. \n";
    else
    {
        std::string tempName;
        while(std::getline(inData, tempName))
        {
            name.push_back(tempName);
        }
    }
    inData.close();

    selectionSort(name);
    showStrings(name);

    return 0;
}

void selectionSort(std::vector<std::string> &array)
{
    int start, minIndex;
    std::string minString;

    for (start = 0; start < array.size(); start++)
    {
        minIndex = start;
        minString = array[start];
        for ( int index = start + 1; index < array.size(); index++)
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

void showStrings(std::vector<std::string> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        std::cout << array[index] << std::endl;
    }
}
