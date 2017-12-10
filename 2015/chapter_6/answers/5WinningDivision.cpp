#include <iostream>
#include <string>

void getSales(std::string, double &sale);
void findHighest(double ne, double se, double nw, double sw);

int main()
{
    double ne,
           se,
           nw,
           sw;
    getSales("Northeast", ne);
    getSales("Northwest", nw);
    getSales("Southeast", se);
    getSales("Southwest", sw);

    findHighest(ne, se, nw, sw);
    return 0;
}

void getSales(std::string name, double &sale)
{
    std::cout << "Please enter the sale of branch " << name << std::endl;
    std::cin >> sale;
    while ( sale < 0)
    {
        std::cout << "The sale cannot be less than 0. Please re-enter:'\n";
        std::cin >> sale;
    }
}

void findHighest(double ne, double se, double nw, double sw)
{
    if (ne > se && ne > nw && ne > sw)
        std::cout << "The winning branch is Northeast, the sale is $" << ne
                  << std::endl;
    if (se > ne && se > nw && se > sw)
        std::cout << "The winning branch is Southeast, the sale is $" << se
                  << std::endl;
    if (nw > se && nw > ne && nw > sw)
        std::cout << "The winning branch is Northwest, the sale is $" << nw
                  << std::endl;
    if (sw > ne && sw > nw && sw > se)
        std::cout << "The winning branch is Southwest, the sale is $" << sw 
                  << std::endl;
}

    
