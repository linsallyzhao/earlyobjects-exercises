#include <iostream>
#include <iomanip>

class Sale
{
    private :
        double taxRate;

    public :
        Sale(double rate)
        {
            taxRate = rate;
        }

        Sale()
        {
            taxRate = 0.0;
        }

        double calcSaleTotal(double cost)
        {
            double total = cost + cost * taxRate;
            return total;
        }
};

int main()
{
    Sale cashier1(0.06);
    Sale cashier2;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    std::cout << "With a 0.06 sales tax rate, the total\n"
              << "of the $24.95 sale is $";
    std::cout << cashier1.calcSaleTotal(24.95) << std::endl;

    std::cout << "\nOn a tax-exempt purchase, the total\n"
              << "of the $24.95 sale is, of course, $"
              << cashier2.calcSaleTotal(24.95) << std::endl;

    return 0;
}

