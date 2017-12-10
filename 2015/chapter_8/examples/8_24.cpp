#include <iostream>
#include <vector>

void showValues(std::vector<int>);

int main()
{
    std::vector<int> values;

    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    showValues(values);
    return 0;
}

void showValues(std::vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
        std::cout << vect[count] << " ";
    std::cout << std::endl;
}
