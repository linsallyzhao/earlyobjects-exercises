#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num1, num2, result, answer, choice;
    unsigned seed;

    seed = time(0);
    srand(seed);

    do{
        num1 = rand() % 100 + 1;
        num2 = rand() % 100 + 1;
        cout << "What problem do you wnat to do?\n";
        cout << "1, addition\n";
        cout << "2, subtraction\n";
        cout << "3, multiplication\n";
        cout << "4, quit\n";

        cin >> choice;

        switch (choice) {
            case 1: cout << setw(5) << num1 << endl;
                    cout << setw(5) << num2 << endl;
                    cout << "+" << endl;
                    cout << "----------------\n";
                    result = num1 + num2;
                    break;
            case 2: cout << setw(5) << num1 << endl;
                    cout << setw(5) << num2 << endl;
                    cout << "-" << endl;
                    cout << "----------------\n";
                    result = num1 - num2;
                    break;
            case 3: cout << setw(5) << num1 << endl;
                    cout << setw(5) << num2 << endl;
                    cout << "*" << endl;
                    cout << "----------------\n";
                    result = num1 * num2;
                    break;
            case 4: return 0;
                    //break;
            default: cout << "Invalid choice\n";
                     continue;
        }

        cout << "Please enter your answer:\n";
        cin >> answer;
        if (answer == result)
            cout << "Congrat! That's correct!\n";
        else
            cout << "The answer is " << result << endl;
    }while(choice != 4);
    
    return 0;
}




