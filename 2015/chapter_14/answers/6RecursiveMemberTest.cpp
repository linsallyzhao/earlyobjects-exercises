#include <iostream>

bool isMember(int arr[], int, int);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Please enter integer you want to search:\n";
    int target;
    std::cin >> target;

    if (isMember(array, 10, target))
        std::cout << "Is a member\n";
    else
        std::cout << "Not a member\n";

    return 0;
}

bool isMember(int arr[], int count, int target)
{
    bool found = false;
    if (count > 0)
    {
        if (arr[count - 1] == target)
        {
            found = true;
            return found;
        }
        else
            return isMember(arr, count - 1, target);
    }
    else
        return found;
}

