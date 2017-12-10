#include <iostream>
#include <iomanip>

using namespace std;

class Sale {
    private:
        double taxRate;

    public:
        Sale(double rate) {
            taxRate = rate;
        }

        Sale () {
            taxRate = 0.0;
        }

        double calcSaleTotal(double cost) {
            double total;
            total = cost * ( 1 + taxRate);
            return total;
        }
    
};

int main() {
    Sale cashier1(.06);
    Sale cashier2;

    cout << fixed << showpoint << setprecision(2);

    cout << "With a 0.06 sales tax rate, the total\n";
    cout << "of the $24.95 sale is $";
    cout << cashier1.calcSaleTotal(24.95) << endl;

    cout << "\nOn a tax-exempt purchase, the total\n";
    cout << "of the $24.95 sale is, of course, $";
    cout << cashier2.calcSaleTotal(24.95) << endl;

    return 0;
}
