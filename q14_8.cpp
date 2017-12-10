#include <iostream>

using namespace std;

int A(int m, int n);

int main() {
    cout << "A(0, 0) is " << A(0, 0) << endl;
    cout << "A(0, 1) is " << A(0, 1) << endl;
    cout << "A(1, 1) is " << A(1, 1) << endl;
    cout << "A(1, 2) is " << A(1, 2) << endl;
    cout << "A(1, 3) is " << A(1, 3) << endl;
    cout << "A(2, 2) is " << A(2, 2) << endl;
    cout << "A(3, 2) is " << A(3, 2) << endl;

    return 0;
}

int A(int m, int n) {
    if (m == 0) 
        return n + 1;

    if (n == 0) 
        return A(m - 1, 1);
    else
        return A(m - 1, A(m, n - 1));
    }
