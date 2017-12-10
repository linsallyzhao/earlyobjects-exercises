#include <iostream>
using namespace std;

int main()
{
    double number, price, cost;

    cout << "How many baseballs you purchased last year? \n";
    cin >> number;

    cout << "How much each baseball cost? \n";
    cin >> price;

    cost = number * price;
    cout << "You spent $" << cost << " last year to purchase new baseball" << endl;

    return 0;

}
