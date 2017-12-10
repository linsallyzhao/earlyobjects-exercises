#include <iostream>

int main()
{
    float annual_sallary = 32500,
          bi_monthly_period = 24,
          bi_weekly_period = 26,
          bi_monthly_payment,
          bi_weekly_payment;

    bi_monthly_payment = annual_sallary / bi_monthly_period;
    bi_weekly_payment = annual_sallary / bi_weekly_period;

    std::cout << "Gross pay when paid twice a month: $" 
              << bi_monthly_payment << std::endl
              << "Gross pay when paid every other week: $"
              << bi_weekly_payment << std::endl;

    return 0;

}
