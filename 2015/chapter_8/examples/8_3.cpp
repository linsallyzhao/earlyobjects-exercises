#include <iostream>
#include <fstream>

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    int count = 0;

    std::ifstream datafile;

    datafile.open("work.dat");
    if (!datafile)
        std::cout << "Error opening data file\n";
    else
    {
        while (count < NUM_EMPLOYEES && datafile >> hours[count])
            count++;

        datafile.close();

        std::cout << "The hours worked by each employee are\n";
        for (int employee = 0; employee < count; employee++)
        {
            std::cout << "Employee " << employee + 1 << ": " 
                      << hours[employee] << std::endl;
        }
    }
    return 0;
}
