#include <iostream>
#include <iomanip>
#include <string>

struct CostInfo
{
    double food,
           medical,
           license,
           misc;
};

struct PetInfo
{
    std::string name;
    std::string type;
    int age;

    CostInfo cost;

    PetInfo()
    {
        name = "unknown";
        type = "unknown";
        age = 0;
        cost.food = cost.medical = cost.license = cost.misc = 0.0;
    }
};

int main()
{
    PetInfo pet;

    pet.name = "Sassy";
    pet.type = "cat";
    pet.age = 5;
    pet.cost.food = 300.00;
    pet.cost.medical = 200.00;
    pet.cost.license = 7.00;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Annual costs for my " << pet.age << "-year-old "
              << pet.type << " " << pet.name << " are $"
              << (pet.cost.food + pet.cost.medical + pet.cost.license +
                      pet.cost.misc) << std::endl;

    return 0;
}
