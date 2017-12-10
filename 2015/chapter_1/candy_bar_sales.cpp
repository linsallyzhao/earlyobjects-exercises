#include <iostream>
using namespace std;

int main()
{
    double number, profit_per_bar, total_profit;

    cout << "Enter the number of candy bars sold \n";
    cin >> number;

    cout << "Enter the amount you earn for each candy bar \n";
    cin >> profit_per_bar;
    
    total_profit = number * profit_per_bar;
    cout << "Your total earning is " << total_profit << endl;

    return 0;
}

    
