#include <iostream>
using namespace std;

class AbstractSort {
    private:
        int count;
    public:
        virtual void sort(int arr[], int size) = 0;
        int compare(int a, int b) {
            count++;
            if( a > b)
                return 1;
            else if(a < b)
                return -1;
            else 
                return 0;
        }
        int getCount () {
            return count;
        }
        AbstractSort () {
            count = 0;
        }
};

class QuickSort : public AbstractSort {
public:
    void sort(int arr[], int size) {
        if (size > 0) {
            int p = partition(arr, size);

            sort(arr, p-1);
            sort(arr + p + 1, size - 1 - p);
        }
    }

    int partition(int arr[], int size) {
        int pivotValue = arr[0];
        int pivotIndex = 0;

        for (int pos = 0; pos < size; pos++) {
            if (compare(arr[pos], pivotValue) == -1) {
                swap(arr[pos], arr[pivotIndex + 1]);
                swap(arr[pivotIndex + 1], arr[pivotIndex]);
                pivotIndex++;
            }
        }

        return pivotIndex;
    }
};

int main() {
    int arr[10] = {3, 4, 2, 13, 64, 74, 56, 22, 45, 5};
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    QuickSort quick;
    quick.sort(arr, 10);
    
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << "Sorting took " << quick.getCount() << " compares\n";

    return 0;
}
