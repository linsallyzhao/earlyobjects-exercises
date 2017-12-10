struct Drink {
    std::string name;
    double price;
    int num;
};

#ifndef MACHINE_H
#define MACHINE_H
class Machine {
    private:
        Drink drinks[5];
        double moneyCollected = 0.0;

    public:
        Machine() {
            for (int index = 0; index < 5; index++) {
                drinks[index].price = 1.00;
                drinks[index].num = 20;
            }
            drinks[0].name = "Cola";
            drinks[1].name = "Root beer";
            drinks[2].name = "Orange soda";
            drinks[3].name = "Grape soda";
            drinks[4].name = "Bottled water";
            drinks[4].price = 1.5;

        }

        void displayChoices() {
            std::cout << "1. Cola         $ 1.00\n";
            std::cout << "2. Root bear    $ 1.00\n";
            std::cout << "3. Orange soda  $ 1.00\n";
            std::cout << "4. Grape soda   $ 1.00\n";
            std::cout << "5. Bottled water$ 1.50\n";
        }

        double inputMoney(int &ch) {
            while (ch < 1 || ch > 5) {
                std::cout << "Invalid choice! Try again\n";
                std::cin >> ch;
            }

            return drinks[(ch - 1)].price;
        }

        void buyDrink (int choice) {
            double moneyNeed, moneyGot, moneyBack;
            char buy;
            moneyNeed = inputMoney(choice);
            std::cout << "The price of " << drinks[(choice - 1)].name << " is $"
                 << moneyNeed << std::endl;

            std::cout << "Please enter money: \n";
            std::cin >> moneyGot;
            double temp;
            while (moneyGot < moneyNeed) {
                std::cout << "Not enough money, Please enter more\n";
                std::cin >> temp;
                moneyGot += temp;
            }

            std::cout << "Confirm purchase?\n";
            std::cin >> buy;
            while (buy != 'y' && buy != 'Y' && buy != 'n' && buy != 'N') {
                std::cout << "Invalid choice! Do you want to buy it still?\n";
                std::cin >> buy;
            }
            if (buy == 'n' || buy == 'N') {
                std::cout << "Here is your money $" << moneyGot << std::endl;
            } else if(drinks[(choice - 1)].num < 1) {
                std::cout << "Sold out!\n";
            } else  {
                drinks[(choice - 1)].num--;
                std::cout << "Here is your drink\n";
                moneyCollected += drinks[(choice - 1)].price;
                moneyBack = moneyGot - moneyNeed;
                std::cout << "Your change back is $" << moneyBack << std::endl;
            }

        }

    void dailyReport() {
        for (int index = 0; index < 5; index++) {
            std::cout << "There are " << drinks[index].num << " " << drinks[index].name
                 << " left in the machine\n";
        }

        std::cout << "I collected $" << moneyCollected << " today\n";
    }

    ~Machine() {
        dailyReport();
    }

};


#endif


