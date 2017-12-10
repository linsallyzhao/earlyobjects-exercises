#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount
{
    private:
        double totalCost;
        int days;
        double dailyRate;
        double charge;

    public:
        PatientAccount()
        {
            totalCost = dailyRate = 0;
            days = 0;
        }

        void setCharge(double total)
        {
            charge = total;
        }

        void setDays(int d)
        {
            days = d;
        }

        void setDailyRate(double r)
        {
            dailyRate = r;
        }

        double calcTotal()
        {
            totalCost = days * dailyRate;
            return totalCost;
        }
        
        double getCharge()
        {
            return charge;
        }

};
#endif
