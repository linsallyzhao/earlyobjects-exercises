#include <iostream>

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    std::cout << "Enter the hours worked by " << NUM_EMPLOYEES
              << " employees:\n";
    std::cin >> hours[0] >> hours[1] >> hours[2] >> hours[3]
             >> hours[4] >> hours[5];

    std::cout << "The hours you entered are: \n";
    std::cout << hours[0] << " " << hours[1] << " " << hours[2]
              << " " << hours[3] << " " << hours[4] << " " << hours[5]
              << std::endl;

    return 0;
}
