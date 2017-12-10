#include <iostream>

double calculateRetail(double whole, double markup);

int main()
{
    double whole,
           markup,
           retail;
    std::cout << "Please enter the wholesale price of the item: \n";
    std::cin >> whole;
    std::cout << "Please enter the markup of the item: \n";
    std::cin >> markup;
    retail = calculateRetail(whole, markup);
    std::cout << "Retail price shold be $" << retail << std::endl;
    return 0;
}
double calculateRetail(double whole, double markup)
{
    return whole * ( 1 + markup);
}
