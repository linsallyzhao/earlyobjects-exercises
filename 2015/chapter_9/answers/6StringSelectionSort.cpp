#include <iostream>
#include <string>

void selectionSort(std::string [], int);
void showStrings(std::string [], int);

int main()
{
    const int SIZE = 20;

    std::string name[SIZE] = 
    {"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
     "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
     "Allison, Jeff", "Moreno, Juan", "wolfe, Bill", "Whitman, Jean",
     "Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
     "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

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
