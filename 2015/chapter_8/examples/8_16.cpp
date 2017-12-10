#include <iostream>

typedef int arrayType[];

void showValues(arrayType, int);

int main()
{
    const int SIZE1 = 8;
    const int SIZE2 = 5;
    int set1[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[] = {2, 4, 6, 8, 10};

    std::cout << "Here are the values stored in array set1: ";
    showValues(set1, SIZE1);
    std::cout << "Here are the values stored in array set2: ";
    showValues(set2, SIZE2);
    return 0;
}

void showValues(arrayType nums, int size)
{
    for (int index =  0; index < size; index++)
        std::cout << nums[index] << " ";
    std::cout << std::endl;
}
