#include <iostream>
#include <iomanip>

void getInput(double &pp, double &sp, double &sc, double &pc, int &ns);
double profit(double pp, double sp, double sc, double pc, int ns);
double proForOne();

int main()
{
    double total = 0;
    char choice;
    std::cout << "For your first stock.\n";
    total += proForOne();
    std::cout << "Do you wannt calulate next one? (Y/N)\n";
    std::cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {
        total += proForOne();
        std::cout << "Do you wannt calulate next one? (Y/N)\n";
        std::cin >> choice;
    }
    std::cout << "Your total profit/(loss) is $" << std::fixed 
              << std::setprecision(2) << total << std::endl;
    return 0;
}
        
double proForOne()
{
    double pp, sp, sc, pc, pro;
    int ns;

    getInput(pp, sp, sc, pc, ns);
    pro = profit(pp, sp, sc, pc, ns);

    return pro;
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
