#include <iostream>
using namespace std;

int main()
{
    double total_price, tax_rate, due_tax, total_sale;

    cout <<"Enter the total retail price of inventory \n";
    cin >> total_price;

    cout <<"Enter the tax rate \n";
    cin >> tax_rate;

    due_tax = total_price * tax_rate;
    total_sale = total_price - due_tax;

    cout <<"Total tax is " << due_tax << endl;
    cout <<"Total sale is " << total_sale << endl;

    return 0;
}
