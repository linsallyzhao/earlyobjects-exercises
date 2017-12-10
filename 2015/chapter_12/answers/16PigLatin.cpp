#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    std::string sentence[100];
    std::cout << "Enter your sentence\n";
    std::cin >> sentence[0];
    int count = 1;
    while (std::cin.get() != '\n')
    {
        std::cin >> sentence[count];
        count++;
    }
    std::string modi[count];
    for (int index = 0; index < count; index++)
    {
        char *first = new char;
        *first = sentence[index][0];
        modi[index] = sentence[index].append(first);
        modi[index] = modi[index].erase(0, 1);
        modi[index] = modi[index].append("AY");
        std::cout << modi[index] << " ";
    }

    return 0;
}
