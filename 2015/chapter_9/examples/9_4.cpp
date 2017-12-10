#include <iostream>

void sortArray(int [], int);
void showArray(const int [], int);

int main()
{
    const int SIZE = 6;

    int values[SIZE] = {7, 2, 3,  8, 9, 1};

    std::cout << "The unsorted values are: \n";
    showArray(values, SIZE);

    sortArray(values, SIZE);

    std::cout << "The sorted values are: \n";
    showArray(values, SIZE);

    return 0;
}

void sortArray(int array[], int size)
{
    int temp;
    bool swap;

    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        std::cout << array[count] << " ";
    std::cout << std::endl;
}
