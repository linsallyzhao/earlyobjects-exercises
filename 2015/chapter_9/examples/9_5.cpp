#include <iostream>

void selectionSort(int [], int);
void showArray(const int [], int);

int main()
{
    const int SIZE = 6;

    int values[SIZE] = {5, 7, 2, 8, 9, 1};

    std::cout << "The unsorted values are\n";
    showArray(values, SIZE);

    selectionSort(values, SIZE);

    std::cout << "The sorted values are\n";
    showArray(values, SIZE);
    return 0;
}

void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        std::cout << array[count] << " ";
    std::cout << std::endl;
}

