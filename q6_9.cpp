#include <iostream>
using namespace std;

bool isPrime (int);

int main() {
    int test;
    cout << "Which number do you want me to test?\n";
    cin >> test;

    if (isPrime ( test))
        cout << test << " is a prime number\n";
    else
        cout << "Not a prime number.\n";

    return 0;
}

bool isPrime (int num) {
    int result = 1;
    bool isP = true;
    for (int count = 2; count < num; count++) {
        result *= (num % count);
        if (result != 0)
           result =1;
    }

    if (result == 0) 
        isP = false;
    return isP;
}
