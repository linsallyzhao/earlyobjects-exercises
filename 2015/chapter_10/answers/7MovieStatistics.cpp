#include <iostream>

double findAvg(int *array, int size);
void selectSort(int *array, int size);
int findMode(int *array, int);
double findMedian(int *array, int size);

int main()
{
    int numStu;
    int *movie;
    std::cout << "How many students have been surveyed? \n";
    std::cin >> numStu;
    movie = new int[numStu];
    for (int index = 0; index < numStu; index++)
    {
        std::cout << "Please enter number of movies of student #" << (index + 1)
                  << ": ";
        std::cin >> *(movie + index);
    }

    int mode = findMode(movie, numStu);
    double avg = findAvg(movie, numStu);
    double median = findMedian(movie, numStu);

    std::cout << "For the sample, mode is " << mode << std::endl
              << "Average is " << avg << std::endl
              << "Median is " << median << std::endl;


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

double findMedian(int *array, int size)
{
    selectSort(array, size);
    if (size % 2 == 0)
    {
        return (array[size/2 -1] + array[size/2]) / 2.0;
    }
    else
    {
        return array[size/2];

    }
}
void selectSort(int *array, int size)
{
    int minIndex, minValue;
    for (int index = 0; index < size - 1; index++)
    {
        minIndex = index;
        minValue = array[index];
        for (int count = index + 1; count < size; count++)
        {
            if (array[count] < minValue)
            {
                minValue = array[count];
                minIndex = count;
            }
        }
        array[minIndex] = array[index];
        array[index] = minValue;
    }
}

double findAvg(int *array, int size)
{
    double total = 0;
    for (int index = 0; index < size; index++)
        total += array[index];
    return total / size;
}







