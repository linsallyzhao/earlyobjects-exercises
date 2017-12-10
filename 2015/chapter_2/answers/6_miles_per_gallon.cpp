#include <iostream>

int main()
{
    float gas = 16,
          distance = 350,
          miles_per_gallon;

    miles_per_gallon = distance / gas;

    std::cout << "Your car can travle " << miles_per_gallon
              << " miles for each gallon gas it consumes.\n";

    return 0;
}
