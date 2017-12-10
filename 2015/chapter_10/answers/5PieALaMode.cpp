#include <iostream>

int findMode(int *array, int);

int main()
{
    int pies[30] = {6, 12, 18, 20, 10, 19, 45, 39, 20, 19, 21, 17, 14, 23, 10,
                    15, 19, 10, 28, 27, 20, 14, 15, 8, 9, 10, 12, 14, 18, 10};
    int mode = findMode(pies, 30);

    std::cout << "Most people eat " << mode << " pies per year.\n";

    return 0;
}

int findMode(int *array, int size)
{
    int *unique;
    int *uniqueCount;
    unique = new int[size];
    uniqueCount = new int[size];
    unique[0] = array[0];
    uniqueCount[0] = 1;
    int last = 0;
    for (int index = 1; index < size; index++)
    {
        bool uni = true;
        for ( int count = 0; count < size; count++)
        {
            if (array[index] == unique[count])
            {
                uniqueCount[count]++;
                uni = false;
            }
        }
        if (uni)
        {
            unique[last + 1] = array[index];
            uniqueCount[last + 1] = 1; 
            last++;
        }
    }
    int maxCount = uniqueCount[0];
    int maxIndex = 0;
    for (int index = 1; index <= last; index++)
    {
        if (uniqueCount[index] > maxCount)
        {
            maxCount = uniqueCount[index];
            maxIndex = index;
        }
    }
    return unique[maxIndex];
}








