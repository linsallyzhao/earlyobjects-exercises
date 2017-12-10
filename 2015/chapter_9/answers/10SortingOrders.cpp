#include <iostream>

void bubbleSort(int [], int);
void selectionSort(int [], int);

int main()
{
    int num1[8] = {25, 265, 215, 369, 258, 159, 354, 658};
    int num2[8];
    std::cout << "Print original array\n";
    for (int index = 0; index < 8; index++)
    {
        num2[index] = num1[index];
        std::cout << num1[index] << " ";
    }
    std::cout << std::endl;

    bubbleSort(num1, 8);
    selectionSort(num2, 8);

    return 0;
}

void bubbleSort(int array[], int size)
{
    std::cout << "Bubble sort\n";
    int temp,
        count = 0;
    bool swap;
    do
    {
        swap = false;
        for (int index = 0; index < (size - 1); index++)
        {
            if (array[index] > array[index + 1])
            {
                temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                swap = true;
            }
        }
        count++;
        std::cout << "After pass #" << count << std::endl;
        for (int index = 0; index < size; index++)
            std::cout << array[index] << " ";
        std::cout << std::endl;

    } while(swap);
    std::cout << std::endl;

}

void selectionSort(int array[], int size)
{
    std::cout << "Selection sort\n";
    int index,
        minIndex,
        minValue;
    int count = 0;

    for (index = 0; index < (size - 1); index++)
    {
        minIndex = index;
        minValue = array[index];
        for (int start = index + 1; start < size; start++)
        {
            if (array[start] < minValue)
            {
                minValue = array[start];
                minIndex = start;
            }
        }
        array[minIndex] = array[index];
        array[index] = minValue;
        count++;
        std::cout << "After pass #" << count << std::endl;
        for (int index = 0; index < size; index++)
            std::cout << array[index] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



