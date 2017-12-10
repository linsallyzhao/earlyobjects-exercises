#include <iostream>

int main()
{
    float cost,
          minRate = 0.8,
          insurance;

    std::cout << "Please enter replacement cost of your building \n";
    std::cin >> cost;

    insurance = cost * minRate;

    std::cout << "You should at least insure " << insurance 
              << " dollars for this property. \n";

    return 0;
}
    
