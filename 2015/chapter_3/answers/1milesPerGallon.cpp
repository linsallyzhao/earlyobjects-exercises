#include <iostream>

int main()
{
    float gas,
          mile,
          milePerGallon;

    std::cout << "How many gallons can your car hold in the tank? \n";
    std::cin >> gas;

    std::cout << "How many miles can your car be driven on a full tanl? \n";
    std::cin >> mile;

    milePerGallon = mile / gas;

    std::cout << "Your car can be driven " << milePerGallon 
              << "miles for each gallon gas. ";

    return 0;
}

