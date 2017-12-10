#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

int main()
{
    std::string list[11] = {"Becky Warren, 678-1223",
                        "Joe Looney, 586-0097",
                        "Geri Palmer, 223- 8878",
                        "Lynn Presnell, 887-1212",
                        "Holly Gaddis, 223-8878",
                        "Sam Wiggina, 486-0998",
                        "Bob Kain, 586-8712",
                        "Tim Haynes, 586-7676",
                        "Warren Gaddis, 223-9037",
                        "Jean James, 678-4939",
                        "Ron Palmer, 486-2783"};

    std::string compare;
    std::cout << "Enter target\n";
    std::cin >> compare;
    int strPtr = -1;

    for (int index = 0; index < 11; index++)
    {
        strPtr = list[index].find(compare, 0);
        if (strPtr != -1)
            std::cout << list[index] << std::endl;
    }
    return 0;
}
