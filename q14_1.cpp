#include <iostream>
using namespace std;


int factorial(int);

int main () {
    int num;
    cout << "Please enter a number:\n";
    cin >> num;

    cout << "The factorial of " << num << " is " << factorial(num) << endl;
}

int factorial(int n) {
    int product = 1;
    for (int i = 1; i <= n; i++) 
        product *= i;

    return product;
}
