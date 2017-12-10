#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Stats.h"

Stats getData(std::string info[]);
void createReport(Stats data, std::string info[]);

int main()
{
    std::string name[15] = {"Joe", "Ross", "Chris", "Bob", "Cane",
                            "Matt", "Mark", "Mike", "David", "chalse",
                            "Andy", "Shalw", "Shane", "Peter", "John"};
    Stats times = getData(name);
    createReport(times, name);

    return 0;
}

Stats getData(std::string name[])
{
    Stats run;
    for (int index = 0; index < 15; index++)
    {
        double temp;
        std::cout << "Please enter the time for " << name[index] << ": ";
        std::cin >> temp;
        run.storeValue(temp);
    }
    return run;
}

void createReport(Stats run, std::string name[])
{
    std::cout << "      Tulsa Tigers Track Team\n\n";
    std::cout << "Average 100 yard-dash time :" << std::fixed << std::showpoint
              << std::setprecision(2) << run.average() << " seconds.\n";
    std::cout << "Slowest runner: " << name[run.highest()] << "     " 
              << std::fixed << std::showpoint << std::setprecision(2) 
              << run.getOne(run.highest()) << " seconds.\n";
    std::cout << "Fastest runner: " << name[run.lowest()] << "     " 
              << std::fixed << std::showpoint << std::setprecision(2) 
              << run.getOne(run.lowest()) << " seconds.\n";
}
