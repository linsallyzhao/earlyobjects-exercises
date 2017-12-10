#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string passWord;

    cout << "Please enter a password:\n";
    getline(cin, passWord);
    
    bool hasUpper = false,
         hasLower = false,
         hasDigit = false;

    for (int index = 0; index < passWord.length(); index++ ){
        if (isupper(passWord[index]))
            hasUpper = true;
        else if (islower(passWord[index]))
            hasLower = true;
        else if (isdigit(passWord[index]))
            hasDigit = true;

    }

    if (!hasUpper)
        cout << "Has to have a upper case!\n";
    if (!hasLower)
        cout << "Has to have a lower case!\n";
    if (!hasDigit)
        cout << "Has to have a digit!\n";


    return 0;
}
