#ifndef SURGERY_H
#define SURGERY_H

class Surgery {
private:
    double charge;
    std::string name;


public:
    void setType(int choice) {
        switch (choice) {
            case 1: charge = 239.45;
                    name = "Albee operation";
                    break;
            case 2: charge = 498.27;
                    name = "Archibald operation";
                    break;
            case 3: charge = 987.37;
                    name = "Arlt line operation";
                    break;
            case 4: charge = 746.98l;
                    name = "Girdlestone operation";
                    break;
            case 5: charge = 398.36;
                    name = "Gastric operation";
        }
    }
    double getCharge() {
        return charge;
    }

    std::string getName() {
        return name;
    }
    
    void showList() {
        std::cout << "1. Albee operation\n";
        std::cout << "2. Archibald operation\n";
        std::cout << "3. Arlt line operation\n";
        std::cout << "4. Girdlestone operation\n";
        std::cout << "5. Gastric operation\n";
    }
};

#endif
