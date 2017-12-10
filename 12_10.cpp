#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {    
    const int LENGTH = 20;
    char input[LENGTH];

    int total = 0;
    int count = 0;
    double avg;

    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, LENGTH);
    while ((strcmp(input, "Q") != 0) && (strcmp(input, "q") != 0)) {
        total += atoi(input);
        count++;
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, LENGTH); 
    }

    if(count != 0) {
        avg = double(total) / count;
        cout << "Average is :" << avg << endl;
    }

    return 0;
}
