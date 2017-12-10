#include <iostream>

double findMedian(double *, int);

int main()
{
    double toFind[] = {1, 5, 7, 14, 25, 47, 90, 95};
    double toFind2[] = {5, 15, 20, 25, 30, 35, 40, 45, 50};

    double median1 = findMedian(toFind, 8);
    double median2 = findMedian(toFind2, 9);

    std::cout << "Median of the first array is " << median1 << std::endl;
    std::cout << "Median of the second array is " << median2 << std::endl;

    return 0;
}
double findMedian(double *array, int size)
{
    if (size % 2 == 0)
    {
        return (*(array + (size/2 - 1)) + *(array + (size/2))) / 2;
    }
    else
    {
        return *(array + size / 2);
    }
}

