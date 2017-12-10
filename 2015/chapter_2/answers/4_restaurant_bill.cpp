#include <iostream>

int main()
{
    float meal_cost = 44.5,
          tax_rate = 0.0675,
          tip_rate = 0.15,
          tax,
          tip,
          total_bill;

    tax = meal_cost * tax_rate;
    tip = (meal_cost + tax) * tip_rate;
    total_bill = meal_cost + tax + tip;

    std::cout << "The meal cost " << meal_cost << " dollars.\n";
    std::cout << "You should pay tax " << tax << " dollars. \n";
    std::cout << "You should pay a generous tip, which should be "
              << tip << " dollars. \n";
    std::cout << "Your total cost for this meal will be "
              << total_bill << " dollars. \n";

    return 0;

}
