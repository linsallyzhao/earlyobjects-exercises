#include <cmath>
#include <iostream>

using namespace std;


long long factorial (int a);
int main() {
    double pDef = 0.02;
    double pPay = 0.98;
    double sum = pow(0.98, 100.0);


    for (int index = 1; index <= 10; index++) {
            long long comb = 1;
            int  factor = 100;
        for (int count = 0; count < index; count++) {
            comb *= factor;
            factor--;
        }
        comb /= factorial(index);
        sum += comb * pow(pDef, index) * pow(pPay, 100 - index);


        cout << index << endl;
        cout << sum << endl;
    }
    
    return 0;
}

long long factorial (int a) {
    long long fac = 1;
    for (a; a > 0; a--) {
        fac *= a;
    }
    return fac;
}

