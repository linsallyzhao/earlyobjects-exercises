#include <iostream>

int main()
{
    double fat, totalCalo, caloFat, percentage;

    std::cout << "Please enter the total calory of the food and\n"
              << "how many grams of fat in this food. \n";
    std::cin >> totalCalo >> fat;

    if ((totalCalo > 0) && (fat > 0))
    {
        caloFat = fat * 9;
        percentage = 100 * caloFat / totalCalo;

        if (percentage > 100)
            std::cout << "This is impossible!\n";
        else
        {
            std::cout << percentage << "\% calories of this food comes from fat. \n";
            if (percentage < 30)
                std::cout << "This is low fat. \n";
        }
    }
    else
        std::cout << "Faulty input\n";

    return 0;
}
