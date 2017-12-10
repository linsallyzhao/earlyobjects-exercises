#ifndef PHARMACY_H 
#define PHARMACY_H

class Pharmacy {
private:
    double charge;
    std::string name;


public:
    void setType(int choice) {
        switch (choice) {
            case 1: charge = 39.45;
                    name = "Pain killer";
                    break;
            case 2: charge = 48.27;
                    name = "Fart killer";
                    break;
            case 3: charge = 98.37;
                    name = "Anger killer";
                    break;
            case 4: charge = 76.98l;
                    name = "Blink killer";
                    break;
            case 5: charge = 38.36;
                    name = "Hunger killer";
        }
    }
    double getCharge() {
        return charge;
    }

    std::string getName() {
        return name;
    }
    
    void showList() {
        std::cout << "1. Pain killer\n";
        std::cout << "2. Fart killer\n";
        std::cout << "3. Anger killer\n";
        std::cout << "4. Blink killer\n";
        std::cout << "5. Hunger killer\n";
    }
};

#endif
