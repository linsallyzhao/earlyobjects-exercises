#include <iostream>

int main()
{
    float purchase = 52,
          state_tax_rate = 0.04,
          county_tax_rate = 0.02,
          state_tax,
          county_tax,
          total_tax;

    state_tax = purchase * state_tax_rate;
    county_tax = purchase * county_tax_rate;
    total_tax = state_tax + county_tax;

    std::cout << "Purhcase price is $" << purchase << std::endl;
    std::cout << "State tax is $" << state_tax << std::endl;
    std::cout << "County tax is $" << county_tax << std::endl;
    std::cout << "Total tax is $" << total_tax << std::endl;

    return 0;
}
