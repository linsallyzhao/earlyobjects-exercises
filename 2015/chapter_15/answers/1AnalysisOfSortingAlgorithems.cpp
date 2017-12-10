#include <iostream>

class AbstractSort
{
    private:
        int count;
    public:
        AbstractSort() { count = 0; }
        bool compare(int arr[], int s, int e);
        virtual void sort(int arr[], int size) = 0;
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

void display(int arr[], int size) 
{
    for (int index = 0; index < size; index++)
        std::cout << arr[index] << " ";
    std::cout << std::endl;
}

class SelectSort: public AbstractSort
{
    public:
        virtual void sort(int arr[], int size);
        void report() const
        {
            std::cout << "Select sort took " << getCount() << " steps\n";
        }
};

void SelectSort::sort(int arr[], int size)
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

int main()
{
    int const SIZE = 10;
    int arr[SIZE] = {43, 5, 12, 67, 92, 33, 43, 76, 100, -7};
    SelectSort testSelect;
    testSelect.sort(arr, SIZE);
    display(arr, SIZE);
    testSelect.report();

    return 0;
}


