#include <iostream>
#include <ctime>

int main()
{
    time_t epSeconds, epoch;
    std::cout << epSeconds << "  " << epoch << std::endl;
    epSeconds = time(NULL);
    std::cout << epSeconds << std::endl;
    time(&epoch);
    std::cout << "The number of seconds since the epoch is "
              << epoch << std::endl;

    return 0;
}

