#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class PayRoll {
    private:
        int hours;
        double payRate;
    public:
        void setHours (int h) {
            hours = h;
        }
        void setPayRate(double p) {
            payRate = p;
        }
        double getGross() {
            return hours * payRate;
        }
};


int main() {    
    PayRoll workers[7];
    ifstream info;
    int hour;
    double pay;
    info.open("payroll.dat");
    if (info) {
        for (int index = 0; index < 7; index++) {
            info >> hour;
            workers[index].setHours(hour);
            info >> pay;
            workers[index].setPayRate(pay);
        }
    } else
        cout << "Cannot open file!\n";

    for (int id = 0; id < 7; id++) {
        cout << "Gross pay for worker #" << (id + 1) << " is $" 
             << workers[id].getGross() << endl;
    }

    return 0;
}
