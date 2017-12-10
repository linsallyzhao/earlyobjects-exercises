#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    char nums[20];
    std::cout << "Please enter your numbers\n";
    std::cin.getline(nums, 20);
    int array[strlen(nums)];
    for (int index = 0; index < strlen(nums); index++)
    {
        char *sPtr = new char[2];
        *sPtr = nums[index];
        array[index] = atoi(sPtr);
    }
    int total = 0;
    int min = array[0],
        max = array[0];
    for (int index = 0; index < strlen(nums); index++)
    {
        total += array[index];
        if ( array[index] < min)
            min = array[index];
        else if (array[index] > max)
            max = array[index];
    }
    std::cout << "The total is " << total << " and the largest is " 
              << max << ", the lowest is " << min << std::endl;

    return 0;
}

