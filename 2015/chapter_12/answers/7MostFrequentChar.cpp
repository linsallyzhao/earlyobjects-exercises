#include <iostream>
#include <cstring>
#include <cstdlib>

char findMode(char *array);

int main()
{
    char target[80];
    std::cout << "Please enter a string\n";
    std::cin.getline(target, 79);
    char mode = findMode(target);
    std::cout << "The most frequent character is " << mode << std::endl;

    return 0;
}

char findMode(char *array)
{
    char *unique;
    int *uniqueCount;
    unique = new char[strlen(array)];
    uniqueCount = new int[strlen(array)];
    unique[0] = array[0];
    uniqueCount[0] = 1;
    int last = 0;
    for (int index = 1; index < strlen(array); index++)
    {
        bool uni = true;
        for ( int count = 0; count < strlen(array); count++)
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








