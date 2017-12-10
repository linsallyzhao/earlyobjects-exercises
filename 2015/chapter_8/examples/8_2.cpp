#include <iostream>

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    int count;

    std::cout << "Enter the hours wroked by " << NUM_EMPLOYEES
              << " employees: \n";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        std::cin >> hours[count];

    std::cout << "The hours you entered are:\n";

    for (count = 0; count < NUM_EMPLOYEES; count++)
        std::cout << " " << hours[count];

    std::cout << std::endl;

    return 0;
}

