#include <iostream>
using namespace std;

void getNums (int&, int&);
void orderNums (int&, int&);

int main() {
    int small, big;

    getNums(small, big);
    orderNums(small, big);

    cout << "The two input numbers ordered smallest to biggest are "
         << small << " and " << big << endl;
    
    return 0;
}

void getNums (int &input1, int &input2) {
    cout << "Enter an integer:\n";
    cin >> input1;
    cout << "Enter another integer:\n";
    cin >> input2;
}

void orderNums (int &num1, int &num2) {
    int temp;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}

