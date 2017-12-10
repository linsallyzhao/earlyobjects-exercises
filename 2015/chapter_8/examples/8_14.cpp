#include <iostream>

void showValue(int);

int main()
{
    const int ARRAY_SIZE = 8;
    int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        showValue(collection[index]);
    }
    std::cout << std::endl;
    return 0;
}

void showValue(int num)
{
    std::cout << num << " ";
}
