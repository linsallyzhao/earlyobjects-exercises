#include <iostream>
#include <iomanip>

const double PAY_RATE = 22.55,
             BASE_HOURS = 40.0,
             OT_MULTIPLIER = 1.5;

double getBasePay(double);
double getOvertimePay(double);


int main()
{
    double hours,
           basePay,
           overtimePay = 0.0,
           totalPay;

    std::cout << "How many hours did you  work? \n";
    std::cin >> hours;

    basePay = getBasePay(hours);

    if (hours > BASE_HOURS)
        overtimePay = getOvertimePay(hours);

    totalPay = basePay + overtimePay;

    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    std::cout << "Base pay      $" << std::setw(7) << basePay << std::endl
              << "Overtime pay  $" << std::setw(7) << overtimePay << std::endl
              << "Total pay     $" << std::setw(7) << totalPay << std::endl;
    return 0;
}

double getBasePay(double hoursWorked)
{
    double basePay;

    if (hoursWorked > BASE_HOURS)
        basePay = BASE_HOURS * PAY_RATE;
    else
        basePay = hoursWorked * PAY_RATE;
    return basePay;
}

double getOvertimePay(double hoursWorked)
{
    double overtimePay;

    if (hoursWorked > BASE_HOURS)
    {
        overtimePay =
            (hoursWorked - BASE_HOURS) * PAY_RATE *  OT_MULTIPLIER;
    }
    else
        overtimePay = 0.0;
    return overtimePay;
}
