#include <iostream>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

void displaySurg()
{
    std::cout << "Please choose from the surgery menu:\n"
              << "1. eyeSurgery\n"
              << "2. handSurgery\n"
              << "3. noseSurgery\n"
              << "4. teethSurgery\n"
              << "5. faceSurgery\n";
}

void displayMedi()
{
    std::cout << "Please choose from the medication menu:\n"
              << "1. pain killer\n"
              << "2. penicillin\n"
              << "3. vaseline\n"
              << "4. vitamin A\n"
              << "5. vitamin B\n";
}

int main()
{
    PatientAccount John;

    int dayNum;
    std::cout << "How long did you live in hospital?\n";
    std::cin >> dayNum;
    John.setDays(dayNum);

    double dayCharge;
    std::cout << "How much does it cost pre day?\n";
    std::cin >> dayCharge;
    John.setDailyRate(dayCharge);

    int surgC;
    displaySurg();
    std::cin >> surgC;

    int mediC;
    displayMedi();
    std::cin >> mediC;
    
    Surgery JohnSurg;
    Pharmacy JohnMedi;
    JohnSurg.addSurg(surgC, John);
    JohnMedi.addMedical(mediC, John);

    std::cout << "Total for John is $" << John.getCharge() << std::endl;

    return 0;
}
