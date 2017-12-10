#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail (double, double);

int main() {
    double whoPrice, markup, rePrice;

    cout << "What is the wholesale price of the product?\n";
    cin >> whoPrice;
    while (whoPrice <= 0) {
        cout << "That is too low. Has to be above zero:\n";
        cin >> whoPrice;
    }
    cout << "What is the mark up?\n";
    cin >> markup;

    while (markup < 0) {
        cout << "That is not good business, you'll lose money!\n";
        cin >> markup;
    }

    rePrice = calculateRetail (whoPrice, markup);
    cout << fixed << showpoint << setprecision(2);
    cout << "The retail price is $" << rePrice << endl;
    return 0;
}
double calculateRetail (double wPrice, double markup) {
    double price = wPrice * (1 + markup);
    return price;
}

