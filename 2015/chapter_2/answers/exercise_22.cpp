#include <iostream>
using namespace std;

int main()
{
    int eggs, cartons;

    cout << "How many eggs did you collect today? \n";
    cin >> eggs;

    cartons = eggs / 12;

    cout << "You can pack " << cartons << " cartons! \n";

    return 0;
}
