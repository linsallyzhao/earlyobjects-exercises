#include <iostream>
#include <algorithm>

class AbstractSort
{
    private:
        int count;
    public:
        AbstractSort() { count = 0; }
        bool compare(int arr[], int s, int e);
        virtual void sort(int arr[], int size, int start = 0) = 0;
        int getCount() const { return count; }
};

bool AbstractSort::compare(int arr[], int s, int e)
{
    bool smaller = false;
    if (arr[s] < arr[e])
        smaller = true;
    count++;
    return smaller;
}

class SelectSort: public AbstractSort
{
    public:
        virtual void sort(int arr[], int size, int start = 0);
        void report() const
        {
            std::cout << "Select sort took " << getCount() << " steps\n";
        }
};

void SelectSort::sort(int arr[], int size, int start)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (compare(arr, index, minIndex))
            {
                minValue = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minValue;
    }
}

class QuickSort : public AbstractSort
{
    public:
        virtual void sort(int arr[], int size, int start = 0);
        int partition(int arr[], int start, int end);
        void report()
        {
            std::cout << "Quick sort took " << getCount() << " steps.\n";
        }
};
void QuickSort::sort(int arr[], int size, int start)
{
    int end = size - 1 + start;
    if (start < end)
    {
        int p = partition(arr, start, end);
        sort(arr, p - start, start);
        sort(arr, end - p, p + 1);
    }
}

int QuickSort::partition(int arr[], int start, int end)
{
    int pivotValue = arr[start];
    int pivotIndex = start;

    for (int pos = start + 1; pos <= end; pos++)
    {
        if (compare(arr, pos, pivotIndex))
        {
            std::swap(arr[pivotIndex + 1], arr[pos]);
            std::swap(arr[pivotIndex], arr[pivotIndex + 1]);
            pivotIndex++;
        }
    }
    return pivotIndex;
}

void display(int arr[], int size) 
{
    for (int index = 0; index < size; index++)
        std::cout << arr[index] << " ";
    std::cout << std::endl;
}

int main()
{
    int const SIZE = 10;
    int arr[SIZE] = {43, 5, 12, 67, 92, 33, 43, 76, 100, -7};
    int array[SIZE];
    for (int i = 0; i < SIZE; i++)
        array[i] = arr[i];

    SelectSort testSelect;
    testSelect.sort(arr, SIZE);
    display(arr, SIZE);
    testSelect.report();

    QuickSort testQuick;
    testQuick.sort(array, SIZE);
    display(array, SIZE);
    testQuick.report();

    return 0;
}


