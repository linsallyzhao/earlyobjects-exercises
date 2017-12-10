struct Seat {
    double price;
    char occupied;
};

#ifndef TICKETMANAGER_H
#define TICKETMANAGER_H

class TicketManager {
    private:
        Seat seats[15][30];
        double moneyCollected = 0.0;
        int ticketsSold = 0;


    public:
        TicketManager(){
            std::ifstream price;
            price.open("SeatPrices.dat");
            std::ifstream ava;
            ava.open("SeatAvailability.dat");

            double rowPrice;
            char ocu;
            for  (int row = 0; row < 15; row++) {
                price >> rowPrice;
                for ( int col = 0; col < 30; col++) {
                    seats[row][col].price = rowPrice;
                    ava >> ocu;
                    seats[row][col].occupied = ocu;
                }
            }
        }

    bool available(int x, int y) {
        if (seats[x][y].occupied == '#')
            return true;
        else
            return false;
    }

    double getPrice(int x, int y) const {
        return seats[x][y].price;
    }

    void collectMoney(double mon)  {
        moneyCollected += mon;
    }

    void occupySeat(int x, int y) {
        seats[x][y].occupied = '*';
        ticketsSold++;
    }

    void displaySeatsChart() const {
        std::cout << std::setw(25) << "SCREEN" << std::endl;
        std::cout << std::setw(8) << " " << "123456789012345678901234567890\n";
        for (int row = 0; row < 15; row++) {
            std::cout << "Row " << std::setw(4) << std::left << (row + 1);
            for (int col = 0; col < 30; col++) {
                std::cout << seats[row][col].occupied;
            }
            std::cout << std::endl;
        }

    }

    double getMoneyCollected() const {
        return moneyCollected;
    }

    int getTicketNum() const {
        return ticketsSold;
    }


};

#endif

