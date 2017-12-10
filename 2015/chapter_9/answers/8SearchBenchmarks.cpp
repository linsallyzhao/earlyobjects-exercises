#include <iostream>

int linSearch(int [], int, int);
int binaSearch(int [], int, int);

int main()
{
    int nums[20] = {1, 5, 6, 7, 9, 25, 36, 65, 70, 99, 145, 169, 258, 455,
                    654, 1514, 6584, 6690, 7009, 8000};
    int target;
    std::cout << "Enter target to search: ";
    std::cin >> target;
    int linComp = linSearch(nums, 20, target);
    int binaComp = binaSearch(nums, 20, target);

    std::cout << "To find " << target << " in the array, linear search made "
              << linComp << " comparisons\n" << "binary search made "
              << binaComp << " comparisons. \n";

    return 0;
}

int linSearch(int array[], int size, int match)
{
    int count = 0;
    bool found = false;

    while ( !found && count < size)
    {
        if (array[count] == match)
            found = true;
        count++;
    }
    return count;
}

int binaSearch(int array[], int size, int match)
{
    int count = 0;
    int start = 0,
        end = (size - 1),
        middle;
    bool found = false;

    while (!found && start <= end)
    {
        middle = (start + end) / 2;
        if (array[middle] == match)
            found = true;
        else if (array[middle] > match)
            end = middle - 1;
        else
            start = middle + 1;
        count++;
    }
    return count;
}

                    
