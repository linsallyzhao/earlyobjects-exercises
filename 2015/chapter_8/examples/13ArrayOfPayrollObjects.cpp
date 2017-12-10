#include <iostream>
#include <fstream>

class PayRoll
{
    private:
        double hour, payRate;

    public:
        void setHour(double h)
        {
            hour = h;
        }
        void setPayRate(double r)
        {
            payRate = r;
        }
        double grossPay()
        {
            return hour * payRate;
        }
};

int main()
{
    PayRoll worker[7];
    std::ifstream indata;
    indata.open("payRoll.data");
    if (!indata)
        std::cout << "Error opening data file!\n";
    else
    {
        for (int index = 0; index < 7; index++)
        {
            double tempHour, tempRate;
            indata >> tempHour;
            worker[index].setHour(tempHour);
            indata >> tempRate;
            worker[index].setPayRate(tempRate);
        }

        for (int index = 0; index < 7; index++)
        {
            std::cout << "Gross pay for worker #" << index
                      << " is $" << worker[index].grossPay() << std::endl;
        }
    }
    return 0;
}

