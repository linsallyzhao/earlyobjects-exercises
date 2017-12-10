#include "Pharmacy.h"
#include "PatientAccount.h"                                           

void Pharmacy::addMedical(int choice, PatientAccount &guy)
{
    double newTotal;
    switch (choice)
    {
        case 1: newTotal = guy.getCharge() + painKiller;
                guy.setCharge(newTotal);
                break;
        case 2: newTotal = guy.getCharge() + penicillin;
                guy.setCharge(newTotal);
                break;
        case 3: newTotal = guy.getCharge() + vaseline;
                guy.setCharge(newTotal);
                break;
        case 4: newTotal = guy.getCharge() + vitaminA;
                guy.setCharge(newTotal);
                break;
        case 5: newTotal = guy.getCharge() + vitaminB;
                guy.setCharge(newTotal);
                break;
    }
}

