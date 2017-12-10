#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    unsigned seed;
    int count = 1, guess, num;

    seed = time(0);
    srand(seed);
    num = rand() % 100 + 1;

    cout << "Please guess:\n";
    cin >> guess;
    while (guess != num) {
        cout << "Not my number. \n";
        if (guess > num)
            cout << "Too high!\n";
        else 
            cout << "Too low!\n";
        cout << "Please try again:\n";
        cin >> guess;
        count++;
    }
    cout << "Congrats! You figured out my number! It took you "
         << count << " guesses\n";
    return 0;
}
