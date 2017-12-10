#include <iostream>
#include <iomanip>

using namespace std;

void getLotteryInfo (int &, int&);
long int computeWays (int, int);
long int factorial (int);

int main() {
    int total, pick;
    long int ways;

    cout << "This program will tell you your probability of winning "
         << "\"Little Lotto\".\n";
    getLotteryInfo (total, pick);

    ways = computeWays (total, pick);

    cout << "Your chance of winning the lottery is 1 chance in " << ways << endl;
    cout << "This is a probability of " 
         << fixed << showpoint << setprecision(4)
         << (1.0 / ways) << endl;

    return 0;
}

void getLotteryInfo (int &pickFrom, int &pick) {
    cout << "How many numbers (1 - 12 ) are there to pick from ?\n";
    cin >> pickFrom;

    while (pickFrom < 1 || pickFrom > 12) {
        cout << "It has to be between 1 and 12. Please enter again:\n";
        cin >> pickFrom;
    }

    cout << "How many numbers must you pick to play?\n";
    cin >> pick;

    while (pick < 1 || pick >pickFrom) {
        cout << "That cannot work! Try again:\n";
        cin >> pick;
    }
}


long int computeWays (int pickFrom, int pick) {
    long int combinations;

    combinations = factorial (pickFrom ) / 
            ( factorial (pick) * factorial (pickFrom - pick));

    return combinations;
}


long int factorial (int num) {
    long int result = 1;
    
    for (int count = 1; count <= num; count++)
        result *= count;
    return result;
}


    
