#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"                                           

class Pharmacy
{
    private:
        double painKiller,
               penicillin,
               vaseline,
               vitaminA,
               vitaminB;

    public:
        Pharmacy(double pk = 2.5, double pen = 1.3, double vas = 0.8, 
                double viA = 1.2, double viB = 1.2)
        {
            painKiller = pk;
            penicillin = pen;
            vaseline = vas;
            vitaminA = viA;
            vitaminB = viB;
        }

        void addMedical(int choice, PatientAccount &guy);
};
#endif
