#include <iostream>
#include <cstdlib>
#include <ctime>

int *getRandomNumbers(int);

int main()
{
    int *numbers;
    numbers = getRandomNumbers(5);

    for (int count = 0; count < 5; count ++)
        std::cout << numbers[count] << std::endl;
    delete [] numbers;
    return 0;
}

int *getRandomNumbers(int size)
{
    int *array;

    if (size <= 0)
        return NULL;
    array = new int[size];

    srand(time(0));
    for (int count = 0; count < size; count++)
        array[count] = rand();

    return array;
}

