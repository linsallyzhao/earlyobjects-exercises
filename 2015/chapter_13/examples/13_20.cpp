#include "serialization.h"
#include <cstdlib>

int main()
{
    Person people[] = 
    { Person("Joseph", 'X', "Puff", 31),
        Person("Louise", 'Y', "Me", 28) };

    std::ofstream outFile("MorePeople.dat", std::ios::binary);
    if (!outFile)
    {
        std::cout << "The output file cannot be opened";
        exit(1);
    }

    people[0].store(outFile);
    people[1].store(outFile);
    std::cout << "Data has been written to the file 'MorePeople.dat'";

    outFile.close();
    return 0;
}
