#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#include "Surgery.h"
#include "Pharmacy.h"
#include "PatientAccount.h"

using namespace std;

void printHeader (PatientAccount &patient, ofstream &outputFile);
void askSur(PatientAccount &patient, ofstream &outputFile);
void askMedi(PatientAccount &patient, ofstream &outputFile);


int main() {
    cout << "So you are in a hospital ^_^\n";

    int patientNumber, days;
    string name;
    cout << "What is your name please?\n";
    getline(cin, name);
    cout << "What is your patient number?\n";
    cin >> patientNumber;

    PatientAccount patient(patientNumber, name);

    cout << "How many days have you stayed in hospital?\n";
    cin >> days;
    patient.setDays(days);
    

    ofstream outputFile;
    outputFile.open("Hospital_bill.txt");
    outputFile << fixed << showpoint << setprecision(2);
    printHeader (patient, outputFile);

    askSur(patient, outputFile);

    askMedi(patient, outputFile);
    
    outputFile << setw(20) << "Stay in" << setw(10) << patient.getStayCharge() << endl;
    outputFile << setw(20) << "Total" << setw(10) << patient.calcTotalCharge() << endl;

    return 0;
}


void printHeader (PatientAccount &patient, ofstream &outputFile) {
    outputFile << setw(25) << " Hospital Bill\n";
    outputFile << "Name : " << patient.getName() << "   Patient Number : " 
               << patient.getNum() << endl;
    outputFile << setw(20) << "Item" << setw(10) << "Charge\n";
}


void askSur(PatientAccount &patient, ofstream &outputFile) {
    int choice;
    cout << "What surgery did you have?\n";
    patient.showSurList();
    cin.ignore();
    cin >> choice;
    while (choice < 1 || choice > 5) {
        cout << "Invalid choice. Enter again please:\n";
        cin.ignore(20, '\n');
        cin >> choice;
    }
    outputFile << setw(20) << patient.setSurTreat(choice)
               << setw(10) << patient.getSurCharge() << endl;
}



void askMedi(PatientAccount &patient, ofstream &outputFile) {
    char moreMedi;
    int choice;
    do {
        cout << "What medicine did you have?\n";
        patient.showMediList();
        cin >> choice;
        while (choice < 1 || choice > 5) {
            cout << "Invalid choice. Enter again please:\n";
            cin.get();
            cin >> choice;
        }
        outputFile << setw(20) << patient.setMedi(choice) 
                   << setw(10) << patient.getMediCharge() << endl;
        cout << "Did you have other medicine?\n";
        cin >> moreMedi;
        while (moreMedi != 'y' && moreMedi != 'Y' && moreMedi != 'n' && moreMedi != 'N') {
            cout << "Please choose from y and n:\n";
            cin >> moreMedi;
        }
    } while (moreMedi == 'y' || moreMedi == 'Y');
}
