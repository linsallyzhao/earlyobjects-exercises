#include <iostream>
#include <vector>
#include <algorithm>

void doubleValue(int &);

int main()
{
    std::vector<int> numbers;
    std::vector<int>::iterator iter;

    for (int x = 0; x < 10; x++)
        numbers.push_back(x);

    std::cout << "The numbers in the vector are:\n";
    for (iter = numbers.begin(); iter != numbers.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;

    for_each(numbers.begin(), numbers.end(), doubleValue);
    std::cout << "Now the numbers in the vector are:\n";
    for (iter = numbers.begin(); iter != numbers.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
    return 0;
}

void doubleValue(int &val)
{
    val *= 2;
}
