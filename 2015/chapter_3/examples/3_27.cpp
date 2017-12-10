#include <iostream>
#include <cstring>

int main()
{
    const int SIZE = 12;
    char name1[SIZE],
         name2[SIZE];

    std::strcpy(name1, "Sebastian");
    std::cout << "name1 now holds the string " << name1 << std::endl;

    std::strcpy(name2, name1);
    std::cout << "name2 now also holds the string " << name2 << std::endl;

    return 0;
}
