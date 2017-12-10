#include <iostream>
#include <iomanip>
#include <cmath>

void getInfo(double &future, double &ir, double &term);
double presentValue(double future, double ir, double term);

int main()
{
    double future, ir, term, present;
    getInfo(future, ir, term);

    present = presentValue(future, ir, term);
    std::cout << "The amount you should save today is $" 
              << std::fixed << std::setprecision(2) 
              << present << std::endl;
    return 0;
}

void getInfo(double &future, double &ir, double &term)
{

    std::cout << "Please enter your future value, interest rate and term of saving.\n";
    std::cin >> future >> ir >> term;
    while ( future < 0 || term < 0)
    {
        std::cout << "Your input is invalid, future value or term cannot be "
                  << "\nnegative. Re-enter please: \n";
        std::cin >> future >> ir >> term;
    }
}


double presentValue(double future, double ir, double term)
{
    double present;
    present = future / std::pow((1 + ir), term);
    return present;
}
