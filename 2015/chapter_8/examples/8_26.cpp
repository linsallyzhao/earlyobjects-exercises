#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values(100);

    std::cout << "The values vector has " 
              << values.size() << " elements. \n";
    std::cout << "I will call the clear member function ..\n";
    values.clear();
    std::cout << "Now the values vector has " 
              << values.size() << " elements. \n";
    return 0;
}
