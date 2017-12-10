#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double angle, sine, cosine, tangent;

    std::cout << "Please enter an angle. \n";
    std::cin >> angle;

    sine = std::sin(angle);
    cosine = std::cos(angle);
    tangent = std::tan(angle);

    std::cout << "The sine of the angle is " << sine << std::endl
              << "The cosine of the angle is " << cosine << std::endl
              << "The tangent of the angle is " << tangent << std::endl;

    return 0;
}
