#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;

    cout << "Enter 5 positive numbers separated by spaces and \n"
         << "I will find their square roots: ";

    for (int count = 1; count <=5; count++){
        cin >> number;
        if (number > 0.0) {
            cout << "\nThe square root of " << number << " is " 
                 << sqrt(number);
        }
        else {
            cout << "\n\n" << number << " is negative. \n"
                 << "I cannot find the square root of a negative number.\n";
            break;
        }
    }
    return 0;
}
