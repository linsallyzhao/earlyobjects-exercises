#include "serialization.h"
#include <cstdlib>

int main()
{
    const int NUM_PEOPLE = 2;
    Person people[NUM_PEOPLE];

    std::ifstream inFile("MorePeople.dat", std::ios::binary);
    if (!inFile)
    {
        std::cout << "The input file cannot be opened";
        exit(1);
    }

    for (int k = 0; k < NUM_PEOPLE; k++)
        people[k].load(inFile);
    for (int k = 0; k < NUM_PEOPLE; k++)
        people[k].display();

    inFile.close();
    return 0;
}
