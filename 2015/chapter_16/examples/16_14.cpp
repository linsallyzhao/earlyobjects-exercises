#include <iostream>
#include <vector>
#include <algorithm>

void display(std::vector<int> ve)
{
    for (int x = 0; x < ve.size(); x++)
        std::cout << ve[x] << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vect;
    for (int x = 0; x < 10; x++)
        vect.push_back(x*x);

    std::cout << "The collection has " << vect.size()
              << " elements. Here they are:\n";
    display(vect);

    random_shuffle(vect.begin(), vect.end());

    std::cout << "The elements have been shuffled:\n";
    display(vect);

    sort(vect.begin(), vect.end());

    std::cout << "The vector have been sorted:\n";
    display(vect);

    int val = 49;
    if (binary_search(vect.begin(), vect.end(), val))
        std::cout << "The value " << val
                  << " was found in the vector.\n";
    else
        std::cout << "The value " << val
                  << " was not found in the vector.\n";

    return 0;
}
