#include <iostream>

int main()
{
    float profit_rate = 0.4,
          cost_rate = 1 - profit_rate,
          cost = 12.67,
          selling_price;

    selling_price = cost / cost_rate;

    std::cout << "The selling price of this circuit board will be "
              << selling_price << " dollars.\n";
    std::cout << "This is a good business! \n";

    return 0;
}
