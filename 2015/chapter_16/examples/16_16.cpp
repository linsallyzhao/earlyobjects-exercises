#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    std::vector<int>::iterator iter;

    for (int x = 0; x < 10; x++)
        numbers.push_back(x);

    random_shuffle(numbers.begin(), numbers.end());

    std::cout << "The numbers in the vector are:\n";
    for (iter = numbers.begin(); iter != numbers.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;

    iter = max_element(numbers.begin(), numbers.end());
    std::cout << "The largest value in the vector is "
              << *iter << std::endl;

    iter = min_element(numbers.begin(), numbers.end());
    std::cout << "The smallest value in the vector is "
              << *iter << std::endl;

    return 0;
}

