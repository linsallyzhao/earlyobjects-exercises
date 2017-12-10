#include <iostream>

typedef int arrayType[];

void doubleArray(arrayType, int);
void showValues(arrayType, int);

int main()
{
    const int ARRAY_SIZE = 7;
    arrayType set = {1, 2, 3, 4, 5, 6, 7};

    std::cout << "The arrays values are:\n";
    showValues(set, ARRAY_SIZE);

    doubleArray(set, ARRAY_SIZE);

    std::cout << "\nAfter calling doubleArray, the values are:\n";
    showValues(set, ARRAY_SIZE);
    std::cout << std::endl;
    return 0;
}

void doubleArray(arrayType nums, int size)
{
    for (int index = 0; index < size; index++)
        nums[index] *= 2;
}

void showValues(arrayType nums, int size)
{
    for (int index = 0; index < size; index++)
        std::cout << nums[index] << " ";
    std::cout << std::endl;
}

