#include <vector>
#include <iostream>

int main()
{
    std::vector<int> array1(5);
    std::cout << "array1" << array1.capacity();

    std::vector<int> array2;
    std::cout << "array2" << array2.capacity();

    return 0;
}
