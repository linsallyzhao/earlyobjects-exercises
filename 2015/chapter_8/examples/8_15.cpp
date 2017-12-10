#include <iostream>

void showValues(int intArray[], int size);

int main()
{
    const int ARRAY_SIZE = 8;
    int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    std::cout << "The array contains the values \n";
    showValues(collection, ARRAY_SIZE);
    return 0;
}

void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
        std::cout << nums[index] << "  " ;
    std::cout << std::endl;
}
