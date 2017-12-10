#include <iostream>
#include <string>
#include <algorithm>

template <typename type> void quickSort(type [], int, int);
template <typename type> int partition(type [], int , int);

int main()
{
    const int SIZE = 10;
    int intArray[SIZE] = {45, 34, 24, 100, 23, 78, 63, 27, 19, 3};
    double doubleArray[SIZE] = {3.2, 4.3, 1.3, 2.1, 8.7, 5.9, 3.1, 5.5, 9.9, 10};
    std::string stringArray[SIZE] = {"Adam", "Charle", "Bella", "Tom", "Lee",
                                     "Roll", "Luffy", "Zoro", "Sanji", "Nami"};
    for (int k = 0; k < SIZE; k++)
        std::cout << intArray[k] << " ";
    std::cout << std::endl;

    quickSort(intArray, 0, SIZE - 1);
    for (int k = 0; k < SIZE; k++)
        std::cout << intArray[k] << " ";
    std::cout << std::endl;

    for (int k = 0; k < SIZE; k++)
        std::cout << doubleArray[k] << " ";
    std::cout << std::endl;

    quickSort(doubleArray, 0, SIZE - 1);
    for (int k = 0; k < SIZE; k++)
        std::cout << doubleArray[k] << " ";
    std::cout << std::endl;

    for (int k = 0; k < SIZE; k++)
        std::cout << stringArray[k] << " ";
    std::cout << std::endl;

    quickSort(stringArray, 0, SIZE - 1);
    for (int k = 0; k < SIZE; k++)
        std::cout << stringArray[k] << " ";
    std::cout << std::endl;

    return 0;
}

template <typename type> void quickSort(type arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);

        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

template <typename type> int partition(type arr[], int start, int end)
{
    type pivotValue = arr[start];
    int pivotPosition = start;

    for (int pos = start + 1; pos <= end; pos++)
    {
        if (arr[pos] < pivotValue)
        {
            std::swap(arr[pivotPosition + 1], arr[pos]);
            std::swap(arr[pivotPosition], arr[pivotPosition + 1]);
            pivotPosition++;
        }
    }

    return pivotPosition;
}

