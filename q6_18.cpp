#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void daysAndTimes (int &days, double &depar, double &arrival, ofstream &outputFile);
void air_car_rent_fee (double &tSpent, double &tAllowed, ofstream &outputFile);
void gas_parking (int days, double &tSpent, double &tAllowed, ofstream &outputFile);
void taxi (int days, double &tSpent, double &tAllowed, ofstream &outputFile);
void conference (double &tSpent, double &tAllowed, ofstream &outputFile);
void hotel (int days, double &tSpent, double &tAllowed, ofstream &outputFile);
void meal (int days, double depar, double arrival, double &tSpent, double &tAllowed, ofstream &outputFile);

int main() {
    int days;
    double depar, arrival, runSpent, runAllowed, 
           spentTotal = 0.0, allowedTotal = 0.0;

    ofstream outputFile;
    string fileName;
    
    cout << "Where do you want your report?\n";
    cin >> fileName;
    outputFile.open(fileName.c_str());
    
    outputFile << fixed << showpoint << setprecision(2);
    
    daysAndTimes (days, depar, arrival, outputFile);

    outputFile << setw(15) << " " << setw(12) << "Spent" << setw(12) << "Allowed\n";

    air_car_rent_fee (runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    
    gas_parking (days, runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    
    taxi (days, runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    
    conference (runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    
    hotel (days, runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    
    meal (days, depar, arrival, runSpent, runAllowed, outputFile);
    spentTotal += runSpent;
    allowedTotal += runAllowed;
    

    outputFile << "-------------------------------------------------------\n";
    outputFile << setw(15) << "Total" 
               << setw(12) << spentTotal << setw(12) << allowedTotal << endl;

    return 0;
}


void daysAndTimes (int &days, double &depar, double &arrival, ofstream &outputFile){
    cout << "Total days of travelling?\n";
    cin >> days;
    while (days < 0) {
        cout << "Days of travelling cannot be negative. Try again!\n";
        cout << "Total days of travelling?\n";
        cin >> days;
    }

    cout << "Please enter dapartur and arrival time as real numbers:\n";
    cin.ignore();
    cin >> depar >> arrival;
    while (depar < 0 || depar > 24 || (depar - static_cast<int>(depar)) >= 0.6) {
        cout << "Departure time is invalid. Please enter again\n";
        cin.ignore();
        cin >> depar;
    }
    while (arrival < 0 || arrival > 24 || (arrival - static_cast<int>(arrival)) >= 0.6) {
        cout << "Arrival time is invalid. Please enter again\n";
        cin.ignore();
        cin >> arrival;
    }

    outputFile << "You have travelled for " << days << " days.\n"
               << "You left at " << depar << " in the first day, and "
               << "came back at " << arrival << " in the last day.\n";
}


void air_car_rent_fee (double &tSpent, double &tAllowed, ofstream &outputFile) {
    double air, car;
    cout << "How much did you spend on the flight tickets?\n";
    cin >> air;
    cout << "How much did you spend on car renting?\n";
    cin >> car;
    while (air < 0 || car < 0) {
        cout << "Your spent cannot be negative, come on, they will pay for it.\n"
             << "Get serious!\n";
        cout << "How much did you spend on the flight tickets?\n";
        cin >> air;
        cout << "How much did you spend on car renting?\n";
        cin >> car;
    }
    tSpent = car + air;
    tAllowed = car + air;

    outputFile << setw(15) << "Flight" << setw(12) << air << setw(12) 
               << air << endl;
    outputFile << setw(15) << "Car Renting" << setw(12) << car 
               << setw(12) << car << endl;
}

void gas_parking (int days, double &tSpent, double &tAllowed, ofstream &outputFile) {
    char choice;
    double miles, gasPer, gasTotal, gasAllowed, park, maxPark = 12.0,
           parkAllowed;

    cout << "Did you drive your private car in travalling? (Y/N)\n";
    cin >> choice;
    while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
        cout << "Choose from y and n\n";
        cin >> choice;
    }

    if (choice == 'y' || choice == 'Y') {
        cout << "How many miles did you drive and how much per mile?\n";
        cin >> miles >> gasPer;
        while (miles < 0 || gasPer < 0) {
            cout << "Input cannot be negative, enter again please\n";
            cin >> miles >> gasPer;
        }
        if (gasPer > 0.58) {
            gasTotal = gasPer * miles;
            gasAllowed = miles * 0.58;
        } else 
            gasTotal = gasAllowed = miles * gasPer;
    } else
        gasTotal = gasAllowed = 0.0;

    cout << "Please enter your spent on parking\n";
    cin >> park;
    while (park < 0) {
        cout << "Invalid parking spent, try again\n";
        cin >> park;
    }

    if (park > maxPark * days) 
        parkAllowed = maxPark * days;
    else
        parkAllowed = park;

    tSpent = gasTotal + park;
    tAllowed = gasAllowed + parkAllowed;
    
    outputFile << setw(15) << "Private car" << setw(12) << gasTotal 
               << setw(12) << gasAllowed << endl;
    outputFile << setw(15) << "Parking" << setw(12) << park << setw(12)
               << parkAllowed << endl;
    
}

void taxi (int days, double &tSpent, double &tAllowed, ofstream &outputFile) {
    double taxi, taxiMax = 40.0, taxiAllowed;
    
    cout << "Please enter your spent on taxi\n";
    cin >> taxi;
    while (taxi < 0) {
        cout << "Invalid taxi spent, try again\n";
        cin >> taxi;
    }

    if (taxi > taxiMax * days) 
        taxiAllowed = taxiMax * days;
    else
        taxiAllowed = taxi;

    tSpent = taxi;
    tAllowed = taxiAllowed;

    outputFile << setw(15) << "Taxi" << setw(12) << taxi 
               << setw(12) << taxiAllowed << endl;
}

void conference (double &tSpent, double &tAllowed, ofstream &outputFile) {
    cout << "How much does the registration cost for the conference or seminar?\n";
    cin >> tSpent;
    while (tSpent < 0) {
        cout << "Is the conference really that bad?\n";
        cin >> tSpent;
    }
    tAllowed = tSpent;

    outputFile << setw(15) << "Registration" << setw(12) << tSpent 
               << setw(12) << tAllowed << endl;
}



void hotel (int days, double &tSpent, double &tAllowed, ofstream &outputFile) {
    double hotel, hotelMax = 90.0, hotelAllowed;
    
    cout << "Please enter your spent on hotel\n";
    cin >> hotel;
    while (hotel < 0) {
        cout << "Invalid hotel spent, try again\n";
        cin >> hotel;
    }

    if (hotel > hotelMax * days) 
        hotelAllowed = hotelMax * days;
    else
        hotelAllowed = hotel;

    tSpent = hotel;
    tAllowed = hotelAllowed;

    outputFile << setw(15) << "hotel" << setw(12) << hotel 
               << setw(12) << hotelAllowed << endl;
}
void meal (int days, double depar, double arrival, double &tSpent, 
            double &tAllowed, ofstream &outputFile) {
    int breakfast, lunch, dinner;
    double priBre, priLun, priDin, maxBre, maxLun, maxDin;
    breakfast = lunch = dinner = days - 2;
    if (depar < 7.0) {
        breakfast++;
        lunch++;
        dinner++;
    }else if (depar < 12.0) {
        lunch++;
        dinner++;
    }else if (depar < 18.0) 
        dinner++;


    if (arrival > 19.0) {
        breakfast++;
        lunch++;
        dinner++;
    } else if (arrival > 13.0) {
        lunch++;
        breakfast++;
    } else if (arrival > 8.0) 
        breakfast++;


    cout << "Please enter the price for each breakfast, lunch and dinner\n";
    cin >> priBre >> priLun >> priDin;
    while (priBre < 0 || priLun < 0 || priDin < 0) {
        cout << "You really should eat more\n";
        cin >> priBre >> priLun >> priDin;
    }

    if (priBre > 18.0){
        tSpent = priBre * breakfast;
        tAllowed = 18.0 * breakfast;
    } else
        tSpent = tAllowed = priBre * breakfast;
    if (priLun > 12.0) {
        tSpent += (priLun * lunch);
        tAllowed += (12.0 * lunch);
    } else {
        tSpent = tSpent + (priLun * lunch);
        tAllowed = tAllowed + (priLun * lunch);
    }
    if (priDin > 20.0) {
        tSpent += (priDin * dinner);
        tAllowed += (20.0 * dinner);
    } else {
        tSpent = tSpent + (priDin * dinner);
        tAllowed = tAllowed + (priDin * dinner);
    }

    
    outputFile << setw(15) << "Meals" << setw(12) << tSpent 
               << setw(12) << tAllowed << endl;
}
