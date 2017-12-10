#include <iostream>

int main()
{
    float unitWeight = 9.2,
          palletWeight, 
          totalWeight,
          number;

    std::cout << "Please enter the weight of empty pallet \n";
    std::cin >> palletWeight;
    std::cout << "Please enter the total weight of pallet and widgets\n";
    std::cin >> totalWeight;

    number = (totalWeight - palletWeight) / unitWeight;

    std::cout << "You have " << number << " widgets on the pallet. \n";

    return 0;
}
