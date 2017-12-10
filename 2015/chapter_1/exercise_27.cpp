#include <iostream>
using namespace std;

int main()
{
    double start_bal, deposits, withdrawals, end_bal;

    cout <<"Enter your starting balance \n";
    cin >> start_bal;

    cout <<"Enter the deposits you made \n";
    cin >> deposits;

    cout <<"Enter the withdrawals you made \n";
    cin >> withdrawals;

    end_bal = start_bal + deposits - withdrawals;
    cout <<"Your current account balance is " << end_bal << endl;

    return 0;
}
