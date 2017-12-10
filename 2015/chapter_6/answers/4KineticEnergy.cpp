#include <iostream>
#include <iomanip>

double kineticEnergy(double mass, double velocity);

int main()
{
    double mass,
           velocity,
           KE;

    std::cout << "Please enter the mass in KG:\n";
    std::cin >> mass;
    std::cout << "Please enter the velocity meters per second: \n";
    std::cin >> velocity;

    KE = kineticEnergy(mass, velocity);

    std::cout << "The kinetic energy is " << KE << " J. \n";
    return 0;
}

double kineticEnergy(double mass, double velocity)
{
    double KE;
    KE = 0.5 * mass * velocity * velocity;
    return KE;
}
