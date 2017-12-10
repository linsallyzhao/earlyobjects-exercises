#include <iostream>
using namespace std;

int bubbleSort(int nums[], int size);
int selectionSort(int nums[], int size);
void displayArray(int array[], int size);

int main() {
    const int SIZE = 20;
    int toBubble[SIZE];
    int toSelection[SIZE];
    int temp;

    cout << "Let's get inputs. I need " << SIZE << " integers:\n";
    for (int index = 0; index < SIZE; index++) {
        cin >> temp;
        toBubble[index] = temp;
        toSelection[index] = temp;
    }

    displayArray(toBubble, SIZE);
    int countBubble = bubbleSort(toBubble, SIZE);
    displayArray(toBubble, SIZE);
    cout << "Bubble sort takes " << countBubble << " steps.\n";


    displayArray(toSelection, SIZE);
    int countSelection = selectionSort(toSelection, SIZE);
    displayArray(toSelection, SIZE);
    cout << "Selection sort takes " << countSelection << " steps.\n";

    return 0;
}


int bubbleSort(int nums[], int size) {
    int temp;
    bool swap;
    int swapCount = 0;

    do {
        swap = false;
        for (int index = 0; index < (size - 1); index++) {
            if (nums[index] > nums[index + 1]) {
                temp = nums[index];
                nums[index] = nums[index + 1];
                nums[index + 1] = temp;
                swapCount++;
                swap = true;
            }
        }
    }while (swap);

    return swapCount;
}

int selectionSort(int nums[], int size) {
    int countSwap = 0;
    int min, minIndex, start;

    for (start = 0; start < (size - 1); start++) {
        min = nums[start];
        minIndex = start;
        for (int index = start + 1; index < size; index++) {
            if (nums[index] < min) {
                min = nums[index];
                minIndex = index;
            }
        }
        nums[minIndex] = nums[start];
        nums[start] = min;
        countSwap++;
    }

    return countSwap;

}

void displayArray(int array[], int size) {
    for (int index = 0; index < size; index++) {
        cout << array[index] << "  ";
    }
    cout << endl;
}
