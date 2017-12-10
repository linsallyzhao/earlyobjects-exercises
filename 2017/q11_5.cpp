#include <iostream>
#include <string>
#include "Pstring_Modified.h"
//#include "Pstring_again.h"

using namespace std;

int main() {
    Pstring name;
    cout << "Please enter a string: \n";
    getline(cin, name);
    Pstring name1 = name;

    if (name.isPalindrome())
        cout << name << " is palindrome.\n";
    else
        cout << name << " is not palindrome.\n";

    if (name1.isPalindrome())
        cout << name1 << " is palindrome.\n";
    else
        cout << name1 << " is not palindrome.\n";

    cout << name.length() << endl;

    return 0;
}


