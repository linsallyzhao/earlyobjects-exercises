#include <iostream>

int main()
{
    float tank_volume = 20.0,
          mpg_town = 21.5,
          mpg_highway = 26.8,
          dis_per_tank_town,
          dis_per_tank_highway;

    dis_per_tank_town = tank_volume * mpg_town;
    dis_per_tank_highway = tank_volume * mpg_highway;

    std::cout << "Your car can travel " << dis_per_tank_town
              << " miles for a tank of gas in town. \n";
    std::cout << "Your car can travel " << dis_per_tank_highway
              << " miles for a tank of gas on highway. \n";

    return 0;
}
