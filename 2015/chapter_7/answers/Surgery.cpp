#include "Surgery.h"
#include "PatientAccount.h"

void Surgery::addSurg(int choice, PatientAccount &patient)
{
    double newTotal;
    switch (choice)
    {
        case 1: newTotal = patient.calcTotal() + eyeSurg;
                patient.setCharge(newTotal);
                break;
        case 2: newTotal = patient.calcTotal() + handSurg;
                patient.setCharge(newTotal);
                break;
        case 3: newTotal = patient.calcTotal() + noseSurg;
                patient.setCharge(newTotal);
                break;
        case 4: newTotal = patient.calcTotal() + teethSurg;
                patient.setCharge(newTotal);
                break;
        case 5: newTotal = patient.calcTotal() + faceSurg;
                patient.setCharge(newTotal);
                break;
    }
}
