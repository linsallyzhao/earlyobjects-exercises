#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> values;
    std::vector<int>::iterator iter;

    for (int x = 1; x < 4; x++)
    {
        for (int count = 1; count <= x; count++)
            values.push_back(x);
    }

    std::cout << "The values in the vector are:\n";
    for (iter = values.begin(); iter != values.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl << std::endl;
    std::cout << "The number of 1s in the vector is ";
    std::cout << count(values.begin(), values.end(), 1) << std::endl;
    std::cout << "The number of 2s in the vector is ";
    std::cout << count(values.begin(), values.end(), 2) << std::endl;
    std::cout << "The number of 3s in the vector is ";
    std::cout << count(values.begin(), values.end(), 3) << std::endl;

    return 0;
}
