#include <iostream>
#include <string>
#include "Machine.h"

using namespace std;

int main() {
    int choo;
    Machine sellDrinks;
    cout << "Do you want a drink?\n";
    sellDrinks.displayChoices();
    cout << "Or choose 6 to quit\n";
    cin >> choo;

    while (choo != 6) {
        sellDrinks.buyDrink (choo);
        cout << "another?\n";
        cin >> choo;
    }

    return 0;
}

