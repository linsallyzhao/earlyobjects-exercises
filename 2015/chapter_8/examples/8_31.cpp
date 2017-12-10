#include <iostream>

bool testPIN(const int set1[], const int set2[], int size);

int main()
{
    const int NUM_DIGITS = 4;
    int pin1[NUM_DIGITS] = {2, 4, 1, 8};
    int pin2[NUM_DIGITS] = {2, 4, 6, 8};
    int pin3[NUM_DIGITS] = {1, 2, 3, 4};

    if ( testPIN(pin1, pin2, NUM_DIGITS))
        std::cout << "ERROR: pin1 and pin2 are reported t be the same.\n";
    else
        std::cout << "SUCCESS: pin1 and pin2 are correctly identified "
                  << "as different. \n";

    if ( testPIN(pin1, pin3, NUM_DIGITS))
        std::cout << "ERROR: pin1 and pin3 are reported t be the same.\n";
    else
        std::cout << "SUCCESS: pin1 and pin3 are correctly identified "
                  << "as different. \n";

    if ( testPIN(pin1, pin1, NUM_DIGITS))
        std::cout << "SUCCESS: pin1 and pin1 are correctly reported "
                  << "to be the same.\n";
    else
        std::cout << "ERROR: pin1 and pin1 are erroneously identified "
                  << "as different. \n";

    return 0;
}

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}
