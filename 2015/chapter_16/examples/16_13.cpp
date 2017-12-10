#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect;

    for (int x = 0; x < 10; x++)
        vect.push_back(x * x);

    std::vector<int>::iterator iter = vect.begin();
    while (iter != vect.end())
    {
        std::cout << *iter << " ";
        iter++;
    }

    return 0;
}
