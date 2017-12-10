#include <iostream>
using namespace std;

int countChars (const char *, char);

int main() {
    const int S_LENGTH = 51;
    char userString[S_LENGTH];

    char letter;
    cout << "Enter a string (up to " << S_LENGTH - 1 << " characters); ";
    cin.getline(userString, S_LENGTH);
    cout << "Enter a character and I will tell you how many \n";
    cout << "times it appears in the string: ";
    cin >> letter;

    cout << letter << " appears ";
    cout << countChars(userString, letter) << " times.\n";
    return 0;
}

int countChars (const char *strPtr, char ch) {
    int count = 0;
    while (*strPtr != '\0') {
        if(*strPtr == ch)
            count++;
        strPtr++;
    }
    return count;
}
