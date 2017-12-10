#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values;

    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::cout << "The size of values is " << values.size() << std::endl;

    std::cout << "Popping a value from the vector...\n";
    values.pop_back();
    std::cout << "The size of values is now " << values.size() << std::endl;

    std::cout << "Popping a value from the vector...\n";
    values.pop_back();
    std::cout << "The size of values is now " << values.size() << std::endl;

    std::cout << "Popping a value from the vector...\n";
    values.pop_back();
    std::cout << "The size of values is now " << values.size() << std::endl;
    return 0;
}


