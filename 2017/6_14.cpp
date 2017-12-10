#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayMenu();
int getChoice();
void showFee(string, double, int);

int main() {
    
    const double ADULT_RATE = 120.0,
                 CHILD_RATE = 60.0,
                 SENIOR_RATE = 100.0;
    int months, choice;

    cout << fixed << showpoint << setprecision(2);

    do {
        displayMenu();
        choice = getChoice();

        if (choice != 4) {
            cout << "For how many month?\n";
            cin >> months;

            switch (choice) {
                case 1: showFee ("Adult", ADULT_RATE, months);
                        break;
                case 2: showFee ("Child", CHILD_RATE, months);
                        break;
                case 3: showFee ("Senior", SENIOR_RATE, months);
            }
        }
    }while(choice != 4);

    return 0;
}

void displayMenu() {
    system("clear");
    cout << "\n   Health Clusb Member ship Menu\n\n";
    cout << "1.   Standard Adult Membership\n";
    cout << "2.   Child Membership\n";
    cout << "3.   Senior Citizen Membership\n";
    cout << "4.   Quit the program\n\n";
}


int getChoice() {
    int choice;

    cin >> choice;

    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please re-enter.\n";
        cin >> choice;
    }

    return choice;
}

void showFee(string type, double rate, int months) {
    cout << endl 
         << "Membership Type   : " << type << endl
         << "Number of Months  : " << months << endl
         << "Total Fee         : $" << (rate * months) << endl;

    cout << "\nPress enter to return to the menu.";
    cin.get();
    cin.get();
}

