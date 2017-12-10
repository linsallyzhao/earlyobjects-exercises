#include <iostream>
#include <algorithm>

void quickSort(int [], int, int);
int partition(int [], int, int);

int main()
{
    const int SIZE = 10;
    int array[SIZE] = {17, 53, 9, 2, 30, 1, 82, 64, 26, 5};
    for (int k = 0; k < SIZE; k++)
        std::cout << array[k] << " ";
    std::cout << std::endl;

    quickSort(array, 0, SIZE - 1);
    for (int k = 0; k < SIZE; k++)
        std::cout << array[k] << " ";
    std::cout << std::endl;

    return 0;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);

        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pivotValue = arr[start];
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

