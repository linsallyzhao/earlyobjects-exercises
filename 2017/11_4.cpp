#include <iostream>
#include <iomanip>
#include "budget3.h"
#include "budget3.cpp"
#include "auxil.h"
#include "auxil.cpp"

using namespace std;

int main() {
    const int N_DIVISIONS = 4;

    cout << "Enter the main office's budget request: ";
    double amount;
    cin >> amount;
    Budget::mainOffice(amount);
    Budget divisions[N_DIVISIONS];
    Aux auxOffices[N_DIVISIONS];

    cout << "\nEnter the budget requests for the divisions and \n"
         << "their auxiliary offices as prompted:\n";
    for (int count = 0; count < N_DIVISIONS; count++) {
        double bud;
        cout << "Division " << (count + 1) << ": ";
        cin >> bud;
        divisions[count].addBudget(bud);
        cout << "Divison " << (count + 1) << "'s auxiliary office: ";
        cin >> bud;
        auxOffices[count].addBudget(bud);
    }

    cout << setprecision(2) << showpoint << fixed;
    cout << "Here are the division budget request: \n";
    for (int count = 0; count < N_DIVISIONS; count++) {
        cout << "\tDivision: " << (count + 1) << "\t\t\t$ ";
        cout << setw(7) << divisions[count].getDivBudget() << endl;
        cout << "\tAuxiliary Office of Division " << (count + 1) << "\t$  ";
        cout << auxOffices[count].getDivBudget() << endl;
    }

    cout << "\tTotal Requests (including main office): $";
    cout << Budget::getCorpBudget() << endl;
    return 0;
}
