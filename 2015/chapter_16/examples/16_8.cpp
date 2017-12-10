#include <string>
#include <iostream>

template <class T>
T minimum (T arr[], int size)
{
    T smallest = arr[0];
    for (int k = 1; k < size; k++)
    {
        if (arr[k] < smallest)
            smallest = arr[k];
    }
    return smallest;
}

int main()
{
    int arr1[] = {40, 20, 35};
    std::cout << "The minimum number is " << minimum(arr1, 3) << std::endl;

    std::string arr2[] = {"Zoe", "Snoopy", "Bob", "Waldorf"};
    std::cout << "The minimum string is " << minimum(arr2, 4)
              << std::endl;

    return 0;
}
