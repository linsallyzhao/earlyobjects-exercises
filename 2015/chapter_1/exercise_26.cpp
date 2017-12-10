#include <iostream>
using namespace std;

int main()
{
    double total, used_credit, available_credit;

    cout <<"Enter the customer\'s maximum credit\n";
    cin >> total;

    cout <<"Enter the amount fo credit used by the customer\n";
    cin >> used_credit;
    
    available_credit = total - used_credit;

    cout <<"Your available credit is " << available_credit << endl;

    return 0;
}


