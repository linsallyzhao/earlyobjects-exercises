#include <iostream>
#include <cstring>

int main()
{
    const int N_ITEMS = 5,
              S_LENGTH = 31;

    char prods[N_ITEMS][S_LENGTH] = {"TV327 31 inchTelevision",
                                     "CD257 CD Player",
                                     "TA677 Answering Machine",
                                     "CS109 Car Stereo",
                                     "PC955 Personal Computer"};
    char lookUp[S_LENGTH];
    char *strPtr = NULL;

    std::cout << "\tProduct Database\n\n";
    std::cout << "Enter a product number to search for: ";
    std::cin.getline(lookUp, S_LENGTH);

    int index = 0;
    while (index < N_ITEMS)
    {
        strPtr = strstr(prods[index], lookUp);
        if (strPtr != NULL)
            break;
        index++;
    }
    if (strPtr == NULL)
        std::cout << "No matching product was found. \n";
    else
        std::cout << prods[index] << std::endl;

    return 0;
}
