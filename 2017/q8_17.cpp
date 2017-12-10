#include <iostream>
#include <iomanip>
#include <fstream>
#include "TicketManager.h"

using namespace std;

void displayMenu();
void sellTicket(TicketManager &tikMan);
void salesReport(const TicketManager &tikMan);


int main() {
    TicketManager tikMan;
    displayMenu();
    int choice;
    cin >> choice;
    while (choice >= 1 && choice <= 3) {
        switch (choice) {
            case 1: tikMan.displaySeatsChart();
                    break;
            case 2: sellTicket(tikMan);
                    break;
            case 3: salesReport(tikMan);
        }
        displayMenu();
        cin >> choice;
    }
    return 0;
}

void displayMenu() {
    cout << "1. See available seats\n";
    cout << "2. Buy a ticket\n";
    cout << "3. See a sales report\n";
    cout << "Any other number to quit\n";
}

void sellTicket(TicketManager &tikMan) {
    int r, c;
    cout << "Where do you want to sit?\n Please enter row number and colume number\n";
    cin >> r >> c;

    while ( r < 0 || r > 15 || c < 0 || c > 30) {
        cout << "You will be seating outside of the theater...\n";
        cout << "Do you want to choose again?\n";
        cin >> r >> c;

    }

    if (tikMan.available(r, c)) {
        double charge;
        char buy;
        charge = tikMan.getPrice(r, c);
        cout << "Price of the seat is $" << charge << endl;
        cout << "Confirm buying?\n";
        cin >> buy;

        while (buy != 'y' && buy != 'Y' && buy != 'n' && buy != 'N') {
            cout << "Come on! Seriously\n";
            cin >> buy;
        }

        if (buy == 'y' || buy == 'Y' ) {
            tikMan.collectMoney(charge);
            tikMan.occupySeat(r, c);
        }

    } else {
        cout << "That seat is not available\n";
    }

}


void salesReport(const TicketManager &tikMan) {
    cout << "We made $" << tikMan.getMoneyCollected() << endl;
    cout << "We sold " << tikMan.getTicketNum() << " tickets.\n";
}
