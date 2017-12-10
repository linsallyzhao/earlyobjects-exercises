#include <iostream>
#include <iomanip>

void getInput(double &pp, double &sp, double &sc, double &pc, int &ns);
double profit(double pp, double sp, double sc, double pc, int ns);

int main()
{
    double pp, sp, sc, pc, pro;
    int ns;

    getInput(pp, sp, sc, pc, ns);

    pro = profit(pp, sp, sc, pc, ns);
    if (pro >= 0)
        std::cout << "Your profit is $" << std::fixed << std::setprecision(2)
                  << pro << std::endl;
    else
        std::cout << "Your loss is $" << std::fixed << std::setprecision(2)
                  << (-pro) << std::endl;
    return 0;
}


void getInput(double &pp, double &sp, double &sc, double &pc, int &ns)
{
    std::cout << "Please enter your purchase price.\n";
    std::cin >> pp;
    std::cout << "Please enter your sale price. \n";
    std::cin >> sp;
    std::cout << "Please enter your sale commision. \n";
    std::cin >> sc;
    std::cout << "Please enter your purchase commision. \n";
    std::cin >> pc;
    std::cout << "Please enter your number of shares. \n";
    std::cin >> ns;
    std::cout << "There is no validation for input.Take care of yourself.\n";
}

double profit(double pp, double sp, double sc, double pc, int ns)
{
    double pro;
    pro = sp * ns - sc - pp * ns -pc;
    return pro;
}
