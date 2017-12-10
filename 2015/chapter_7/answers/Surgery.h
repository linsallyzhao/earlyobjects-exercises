#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"                                           

class Surgery
{
    private:
        double eyeSurg,
               handSurg,
               noseSurg,
               teethSurg,
               faceSurg;

    public:
        Surgery(double e = 2000, double h = 1000, double n = 1300,
                double t = 3000, double f = 1500)
        {
            eyeSurg = e;
            handSurg = h;
            noseSurg = n;
            teethSurg = t;
            faceSurg = f;
        }

        void addSurg(int choice, PatientAccount &patient);
};

#endif

