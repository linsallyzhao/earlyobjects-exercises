#include <iostream>

int bubbleSort(int [], int);
int selectionSort(int [], int);

int main()
{
    int num1[20] = {25, 265, 215, 369, 258, 159, 354, 658, 2698, 2158,
                    12, 3, 9, 87, 25, 7782, 21459, 25817, 2568, 29};
    int num2[20];
    for (int index = 0; index < 20; index++)
        num2[index] = num1[index];
    std::cout << "Two array\n";

    int bubExc = bubbleSort(num1, 20);
    int seleExc = selectionSort(num2, 20);
    std::cout << "Get numbers\n";

    std::cout << "To sort the array, bubble sort made " << bubExc << " exchanges.\n"
              << "Selection sort made " << seleExc << " exchanges. \n";

    return 0;
}

int bubbleSort(int array[], int size)
{
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
                count++;
                swap = true;
            }
        }
    } while(swap);

    return count;
}

int selectionSort(int array[], int size)
{
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
    }
    return count;
}



