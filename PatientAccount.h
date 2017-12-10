#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount {
private:
    int patientNum; 
    std::string name;
    int days;
    double surCharge;
    double mediCharge;
    const double DAILY_RATE = 35.45;
    double mediTotal;
    Surgery surTreat;
    Pharmacy medicine;


public:
    PatientAccount (int pn = 12345, std::string na = "Mr. Green") {
        patientNum = pn;
        name = na;
        days = 0;
        surCharge = 0.0;
        mediCharge = 0.0;
        mediTotal = 0.0;
    }
    
    void showSurList() {
        surTreat.showList();
    }
    
    void showMediList() {
        medicine.showList();
    }
    
    void setNum (int nu) {
        patientNum = nu;
    }

    void setName (std::string na) {
        name = na;
    }

    void setDays(int d) {
        days = d;
    }

    std::string setSurTreat(int choice) {
        surTreat.setType(choice);
        surCharge = surTreat.getCharge();
        return surTreat.getName();
    }

    std::string setMedi (int choice) {
        medicine.setType(choice);
        mediCharge = medicine.getCharge();
        mediTotal += mediCharge;
        return medicine.getName();
    }
        
    double calcTotalCharge() {
        double t;
        t = days * DAILY_RATE + surCharge + mediTotal;
        return t;
    }

    int getNum() {
        return patientNum;
    }

    std::string getName() {
        return name;
    }

    int getDays() {
        return days;
    }

    double getStayCharge() {
        return days * DAILY_RATE;
    }

    double getSurCharge() {
        return surCharge;
    }
    
    double getMediCharge() {
        return mediCharge;
    }
    
    double getMediTotal() {
        return mediTotal;
    }
};
#endif
