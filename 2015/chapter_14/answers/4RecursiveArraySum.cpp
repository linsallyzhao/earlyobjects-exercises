#include <iostream>

int addUp(int arr[], int count);

int main()
{
    int array[10];
    for (int index = 0; index < 10; index++)
    {
        std::cout << "Please enter a integer:\n";
        std::cin >> array[index];
    }
    std::cout << "The sum of all elememt is " << addUp(array, 10) << std::endl;


    return 0;
}
int addUp(int arr[], int count)
{
    if (count > 0)
    {
        return arr[count - 1] + addUp(arr, count-1);
    }
}
