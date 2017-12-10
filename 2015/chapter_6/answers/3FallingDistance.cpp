#include <iostream>
#include <iomanip>

double fallingDistance(double time);

int main()
{
    std::cout << "Time" << "        " << "Distance" << std::endl;

    for (int count = 1; count <= 10; count++)
    {
        std::cout << std::setw(5) << count << "      " 
                  << std::setw(8) << std::fixed << std::setprecision(2)
                  << fallingDistance(count) << std::endl;

    }
    return 0;
}

double fallingDistance(double time)
{
    const double G = 9.8;
    double distance;
    distance = 0.5 * G * time * time;
    return distance;
}


