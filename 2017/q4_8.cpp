#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
        unsigned seed;
        seed = time(0);
        srand(seed);
        int num1, num2, sum, result;
        num1 = rand() % 41 + 10;
        num2 = rand() % 41 + 10;
        sum = num1 + num2;

        cout << "   " << setw(4) << num1 << endl;
        cout << " + " << setw(4) << num2 << endl;
        cout << "   " << "----" << endl;
        cout << "Please enter your result"<< endl;
        cin >> result;

        if (result == sum)
            cout << "Congrats! That's correct!\n";
        else
            cout << "The correct answer is " << sum << ". So close T_T\n";

        return 0;
    }

