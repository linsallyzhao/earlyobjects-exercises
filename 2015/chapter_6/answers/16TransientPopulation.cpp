#include <iostream>
#include <iomanip>

double project(double P, double B, double D, double moveIn, double moveOut);
void getInfo(double &start, double &birthR, double &deathR, int &years, double &moveIn, double &moveOut);

int main()
{
    double start, birthR, deathR, moveIn, moveOut;
    int years;
    double P, N;

    getInfo(start, birthR, deathR, years, moveIn, moveOut);
    P = start;

    std::cout << "Years" << "       " << "Population \n";

    for (int i = 1; i <= years; i++)
    {
        N = project(P, birthR, deathR, moveIn, moveOut);
        P = N;
        std::cout << std::setw(5) << i
                  << "      "
                  << std::setw(8) << std::fixed << std::setprecision(2)
                  << N << std::endl;
    }
    return 0;
}

void getInfo(double &start, double &birthR, double &deathR, int &years, double &moveIn, double &moveOut)
{
    std::cout << "Please enter the start population.\n";
    std::cin >> start;
    std::cout << "Please enter the birth rate and death rate.\n"
              << "Both numbers should be between 0 and 1.\n";
    std::cin >> birthR >> deathR;
    while (start < 0 || birthR < 0 || birthR > 1 || deathR < 0 || deathR > 1)
    {
        std::cout << "Your input is not valid. please try again.\n";
        std::cout << "Please enter the start population.\n";
        std::cin >> start;
        std::cout << "Please enter the birth rate and death rate.\n"
                  << "Both numbers should be between 0 and 1.\n";
        std::cin >> birthR >> deathR;
    }
    std::cout << "How many years in the future do you  wanna project?\n";
    std::cin >> years;
    std::cout << "How many individuals move in every year?";
    std::cin >> moveIn;
    std::cout << "How many individuals move out every year?";
    std::cin >> moveOut;

}

double project(double P, double B, double D, double moveIn, double moveOut)
{
    return P * (1 + B) * (1 - D) + moveIn - moveOut;
}

